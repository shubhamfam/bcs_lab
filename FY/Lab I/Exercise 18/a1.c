/*1. Write a program to accept two filenames as command line arguments. Copy the contents of
the first file to the second such that the case of all alphabets is reversed.*/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        return 0;
    }

    FILE *fp, *copyFile;
    char ch;

    fp = fopen(argv[1], "r");
    copyFile = fopen(argv[2], "a");

    if (fp == NULL || copyFile == NULL)
    {
        printf("File opening error ");
        return 0;
    }

    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (isupper(ch))
            fprintf(copyFile, "%c", tolower(ch));
        else if (islower(ch))
            fprintf(copyFile, "%c", toupper(ch));
        else
            fprintf(copyFile, "%c", ch);
    }
    fclose(fp);

    return 1;
}