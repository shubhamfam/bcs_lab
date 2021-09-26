/*4. Write a program to accept characters till the user enters EOF and count number of alphabets
and digits entered. Refer to sample program 5 given above.*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int alphabetCount = 0, digitCount = 0;
    //eof = ctrl+d on linux and ctrl+z on windows

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
            alphabetCount++;
        else if (isdigit(ch))
            digitCount++;
    }

    printf("\nNumber of alphabets: %d\nNumber of digits: %d\n", alphabetCount, digitCount);

    return 0;
}