/*3. Accept any year as input through the keyboard. Write a program to check whether the year is
a leap year or not. (Hint leap year is divisible by 4 and not by 100 or divisible by 400)*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}