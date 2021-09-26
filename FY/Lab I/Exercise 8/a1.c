/*1. Write a recursive C function to calculate the sum of digits of a number. Use this function in
main to accept a number and print sum of its digits.*/
#include <stdio.h>
int sumOfDigits(int);

int main()
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
    return 0;
}

int sumOfDigits(int num)
{

    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}