/*1. Write a program to accept characters from the user till the user enters * and count the
number of characters, words and lines entered by the user. (Hint: Use a flag to count words.
Consider delimiters like \n \t , ; . and space for counting words)*/
#include <stdio.h>

int main()
{
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 1;

    while ((ch = getchar()) != '*')
    {
        if (ch == '\n')
        {
            lineCount++;
            wordCount++;
        }
        else if (ch == '\t' || ch == ' ' || ch == ',' || ch == ';' || ch == '.')
            wordCount++;

        charCount++;
    }
    printf("Word Count: %d\tLine Count: %d \t Character Count: %d\n", wordCount, lineCount, charCount);
    return 0;
}