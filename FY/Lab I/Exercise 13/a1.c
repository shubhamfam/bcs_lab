/*1. Write a program that accepts n words and outputs them in dictionary order.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void accept(char **words, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth word: ", i + 1);
        scanf("%s", words[i]);
    }
}

void display(char **words, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\t", words[i]);
    }
}

void sort_words(char **words, int n)
{
    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(words[j], words[j + 1]) > 0)
            {
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
}

int main()
{
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char **words = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
        words[i] = (char *)malloc(10 * sizeof(char));

    accept(words, n);
    sort_words(words, n);
    display(words, n);
    return 0;
}