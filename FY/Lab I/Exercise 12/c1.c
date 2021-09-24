/*1. Write a program that accepts a sentence and returns the sentence with all the extra
spaces trimmed off. (In a sentence, words need to be separated by only one space; if
any two words are separated by more than one space, remove extra spaces)*/
#include <stdio.h>
#include <stdlib.h>
char *trimExtraSpace(char *);

int main()
{
    char *sentence, *new_sentence;

    sentence = (char *)malloc(sizeof(char));

    printf("\nEnter a senetence: ");
    scanf("%[^\n]s", sentence);

    new_sentence = trimExtraSpace(sentence);

    printf("\nTrimmed sentence: %s", new_sentence);
    free(sentence);
    return 0;
}

char *trimExtraSpace(char *sentence)
{
    char *new_sentence, prev_char = '*';
    new_sentence = (char *)malloc(sizeof(char));

    for (int i = 0, j = 0; sentence[i] != '\0'; prev_char = sentence[i], ++i)
    {

        if (sentence[i] == ' ' && prev_char == ' ')
            continue;

        new_sentence[j] = sentence[i];
        ++j;
    }
    return new_sentence;
}