/*1. Accept n integers in array A. Pass this array and two counter variables to a function which
will set the first counter to the total number of even values in the array and the other to the total
number of odd values. Display these counts in main. (Hint: Pass the addresses of the counters to
the function)*/
#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

void parityCounter(int *arr, int n, int *even_counter, int *odd_counter)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            *even_counter += 1;
        else
            *odd_counter += 1;
    }
}

int main()
{
    int *arr, n, even_counter = 0, odd_counter = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    accept(arr, n);
    display(arr, n);

    parityCounter(arr, n, &even_counter, &odd_counter);

    printf("\nNumber of even values: %d", even_counter);
    printf("\nNumber of odd values: %d", odd_counter);

    return 0;
}