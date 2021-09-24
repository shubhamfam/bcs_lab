/*2. Write a function that accepts a character as parameter and returns 1 if it is an alphabet, 2 if it
is a digit and 3 if it is a special symbol. In main, accept characters till the user enters EOF and use
the function to count the total number of alphabets, digits and special symbols entered.*/
#include <stdio.h>
#include <ctype.h>

int charType(char ch)
{
    if (isalpha(ch))
        return 1;
    else if (isdigit(ch))
        return 2;
    else if (ispunct(ch))
        return 3;
}

int main()
{
    char ch;
    int digitCount = 0, alphaCount = 0, symbolCount = 0;

    while ((ch = getchar()) != EOF)
    {
        if (charType(ch) == 1)
            alphaCount++;
        else if (charType(ch) == 2)
            digitCount++;
        else if (charType(ch) == 3)
            symbolCount++;
    }

    printf("\nAlphabets Count: %d, Digits Count: %d, Special Symbols Count: %d\n", alphaCount, digitCount, symbolCount);

    return 0;
}