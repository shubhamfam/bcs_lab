/*2. Write a program that will accept a string and character to search. The program will
call a function, which will search for the occurrence position of the character in the
string and return its position. Function should return –1 if the character is not found in
the string.*/
#include <stdio.h>

int indexOf(char *str, char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    char *str, ch;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character: ");
    scanf("%c", &ch);

    int position = indexOf(str, ch);

    position != 1 ? printf("%c found in %s at position %d", ch, str, position) : printf("%c not found in %s", ch, str);

    return 0;
}