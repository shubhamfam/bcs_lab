/*2. Write a program in C to reverse each word in a sentence.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strrev(char *str)
{
    char *cpy = (char *)malloc(strlen(str) * sizeof(char));
    int i, j;
    for (i = strlen(str) - 1, j = 0; i >= 0; i--, ++j)
    {
        cpy[j] = str[i];
    }
    return cpy;
}

int main()
{
    char *sentence;
    char *reversedSentence;
    char *word;

    sentence = (char *)malloc(sizeof(char *));
    reversedSentence = (char *)malloc(sizeof(char *));
    word = (char *)malloc(sizeof(char *));

    printf("\nEnter a sentence: ");
    gets(sentence);
    puts(sentence);

    //puts(strrev(sentence));

    for (int i = 0, j = 0; i <= strlen(sentence) + 1; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            strcat(reversedSentence, strrev(word));
            word = (char *)malloc(sizeof(char *));
            j = 0;
        }
        else
        {
            word[j] = sentence[i];
            j++;
        }
    }

    puts(reversedSentence);
    return 0;
}