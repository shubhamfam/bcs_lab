/*3. Write a program that accepts a sentence and splits the sentence into words. Sort each word
and reconstruct the sentence 
Input – this is a string Output – hist is a ginrst*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int splitIntoWords(const char *str, char **words)
{
    int i = 0, j = 0, word_count = 0;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\n' || *str == ';' || *str == ',')
        {
            words[i][j] = '\0';
            words[++i][j + 1] = *str;
            ++i;
            j = 0;
            word_count++;
        }

        words[i][j] = *str;
        j++;
        *str++;
    }
    return word_count + 1;
}

void sort_word(char *word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 0; j < strlen(word) - i - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                char temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }
}

int main()
{
    //memory allocation
    char *str = (char *)malloc(sizeof(char *));
    char **words = (char **)malloc(10 * sizeof(char *));
    for (int i = 0; i < 10; i++)
        words[i] = (char *)malloc(10 * sizeof(char));

    char *reconstructed_sentence = (char *)malloc(sizeof(char *));

    //get sentence
    printf("\nEnter a sentence: ");
    gets(str);

    //splitting sentence into array of words
    int count = splitIntoWords(str, words);

    //sorting each word and reconstructing sentence
    for (int i = 0; i < 10; i++)
    {
        sort_word(words[i]);
        strcat(reconstructed_sentence, words[i]);
    }

    puts(reconstructed_sentence);

    return 0;
}