/*1. Write a program to display all Armstrong numbers between 1 and 500. (An Armstrong
number is a number such that the sum of cube of digits = number itself Ex. 153 = 1*1*1 + 5*5*5
+ 3*3*3 */
#include <stdio.h>

int main()
{
    int sum = 0, remainder;

    for (int i = 1; i <= 500; i++, sum = 0)
    {
        for (int j = i; j > 0; j /= 10)
        {
            remainder = j % 10;
            sum += remainder * remainder * remainder;
        }

        if (sum == i)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}