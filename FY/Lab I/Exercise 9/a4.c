/*4. Write a program to accept n numbers and store all prime numbers in an array called prime.
Display this array.*/
#include <stdio.h>
#include<stdlib.h>
#include "array_utils.h"
#include "../util.h"

int main()
{
    int *arr, *prime_arr, n, num, k = 0;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter array: \n");
    arr = (int *)malloc(n * sizeof(int));

    accept(arr, n);
    display(arr, n);

    prime_arr = (int *)malloc(sizeof(int));

    for (int i = 0; i < n; i++)
    {
        num = *(arr+i);
        
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