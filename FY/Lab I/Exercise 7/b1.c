/*1. Write a function isPrime, which accepts an integer as parameter and returns 1 if the number
is prime and 0 otherwise. Use this function in main to display the first 10 prime numbers.*/
#include <stdio.h>

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int i = 0, num = 2;

    printf("First 10 prime numbers: ");

    while (i < 10)
    {
        if (isPrime(num))
        {
            printf("%d ", num);
            ++i;
        }
        ++num;
    }

    return 0;
}
