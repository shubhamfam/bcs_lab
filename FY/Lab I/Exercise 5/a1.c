/**1. Write a program to display all prime numbers between ____ and ____.*/

#include <stdio.h>
int main()
{
    int i, j, isPrime, from, to, temp;

    printf("Enter a range to display prime numbers(from to): ");
    scanf("%d%d", &from, &to);

    if (from > to)
    {
        temp = from;
        from = to;
        to = temp;
    }

    for (i = from; i <= to; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}