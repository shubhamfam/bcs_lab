/*2. Write a program which accepts a string and two characters as command line arguments and
replace all occurrences of the first character by the second.*/
#include <stdio.h>

void replaceAll(char *str, char *toReplace, char *replacement)
{
    while (*str)
    {
        if (*str == *toReplace)
            *str = *replacement;
        *str++;
    }
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        printf("Error: Invalid number of arguments\n");
        return 0;
    }

    char *str = argv[1];
    char *toReplace = argv[2];
    char *replacement = argv[3];

    replaceAll(str, toReplace, replacement);
    puts(str);
    return 0;
}