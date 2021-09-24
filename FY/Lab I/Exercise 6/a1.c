/*1. Write a program, which accepts a character from the user and checks if it is an alphabet, digit
or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then change
the case.*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch))
    {
        printf("%c is an alphabet\n", ch);
        if (isupper(ch))
            printf("%c is uppercase, changed to lowercase: %c\n", ch, tolower(ch));
        else
            printf("%c is lowercase, changed to uppercase: %c\n", ch, toupper(ch));
    }
    else if (isdigit(ch))
    {
        printf("%c is a digit\n", ch);
    }
    else if (ispunct(ch))
    {
        printf("%c is a punctuation\n", ch);
    }

    return 0;
}