/*2. Write a program that accepts n strings and displays the longest string.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longest_string(const char **strings, int n)
{
    char *longest = (char *)malloc(sizeof(char *));
    longest = *strings;

    for (int i = 1; i < n; i++)
    {
        if (strlen(strings[i]) > strlen(longest))
        {
            longest = strings[i];
        }
    }
    return longest;
}

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
        printf("%s\t", words[i]);
}

int main()
{
    int n;

    printf("Enter number of words: ");
    scanf("%d", &n);

    char **strings = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
        strings[i] = (char *)malloc(30 * sizeof(char *));

    accept(strings, n);

    printf("\nLongest string: %s\n",longest_string(strings, n));
    return 0;
}