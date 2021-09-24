/*1. Write a program to accept n numbers in the range of 1 to 25 and count the frequency of
occurrence of each number.*/
#include <stdio.h>
#include "array_utils.h"
#define MAX 20

void countFrequency(int *arr, int n)
{
    int count = 0;
    int countedQueue[n];

    for (int i = 0, k = 0; i < n; ++i, count = 0)
    {
        if (arrayHas(countedQueue, n, arr[i]))
            continue;

        for (int j = 0; j < n; ++j)
        {
            if (arr[i] == arr[j])
            {
                count++;
                countedQueue[k] = arr[i];
                ++k;
            }
        }

        printf("\nfrequency of occurrence of %d: %d times", arr[i], count);
    }
}

int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d", &n);
    int arr[n];

    accept(arr, n);
    display(arr, n);
    countFrequency(arr, n);

    return 0;
}