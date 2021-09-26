/*2. Write a function to sort an array of n integers using Bubble sort method. Accept n numbers
from the user, store them in an array and sort them using this function. Display the sorted array.*/
#include <stdio.h>
#include "array_utils.h"

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n, *arr;

    printf("How many numbers: ");
    scanf("%d", &n);
    printf("Enter array: \n");

    accept(arr, n);
    display(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array: \n");
    display(arr, n);
}