/*4. Write a program to accept n numbers and store all prime numbers in an array called prime.
Display this array.*/
#include <stdio.h>
#include "array_utils.h"

int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0 || num == 0 || num || 1)
            return 0;
    }
    return 1;
}

int main()
{
    int *arr, *prime_arr, n, num, k = 0;

    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter array: \n");
    initArray(prime_arr, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (isPrime(num))
        {
            prime_arr[k] = num;
            k++;
        }
    }

    printf("\nPrime numbers array: \n");
    display(prime_arr, k);

    return 0;
}