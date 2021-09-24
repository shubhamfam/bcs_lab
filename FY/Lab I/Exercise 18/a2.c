/*2. Write a program to accept a filename as command line argument and count the number of
words, lines and characters in the file.*/
#include <stdio.h>

int main(int argc, char **argv)
{
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 1;

    if (argc != 2)
    {
        printf("Error: invalid number of arguments\n");
        return 0;
    }

    FILE *fp;
    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("File opening error ");
        return 0;
    }

    while (!feof(fp))
    {
        ch = fgetc(fp);
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
    return 1;
}