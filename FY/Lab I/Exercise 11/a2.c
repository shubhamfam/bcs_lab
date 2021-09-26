/*2. Write a program to display the elements of an array containing n integers in the reverse
order using a pointer to the array*/
#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

void arrayInReverse(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int *arr, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    accept(arr, n);
    display(arr, n);

    printf("\nArray in reverse order: ");
    arrayInReverse(arr, n);

    return 0;
}