/*3. Write a program to allocate memory dynamically for n integers such that the memory is
initialized to 0. Accept the data from the user and find the range of the data elements.*/
#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

void findRange(int *arr, int n)
{
    int min, max;
    min = max = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("\nRange : %d - %d", min, max);
}

int main()
{
    int *arr, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));
    printf("Enter array elements: ");
    accept(arr, n);
    display(arr, n);
    findRange(arr, n);
    return 0;
}