/*5. Write a program which accepts a sentence from the user and alters it as follows:
Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int replaceChar(char *str, char toReplace, char replacement)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == toReplace)
            str[i] = replacement;
    }
    return 1;
}

char *reverseCase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
}

int main()
{
    char *str;
    str = (char *)malloc(sizeof(char *));

    printf("Enter a sentence: ");
    gets(str);

    printf("Altered Sentence: ");

    replaceChar(str, ' ', '*');
    reverseCase(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
            str[i] = '?';
    }

    printf("\n%s", str);
    return 0;
}