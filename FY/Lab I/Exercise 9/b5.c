/*5. Write a program to remove all duplicate elements from an array.*/
#include <stdio.h>
#include "array_utils.h"
#include <stdlib.h>

int removeDuplicates(int *arr, int *newArray)
{
    int i = 0, j = 0;

    while (arr[j])
    {
        if (!setHas(newArray, arr[j]))
        {
            newArray[i] = arr[j];
            ++i;
        }
        ++j;
    }
    return i;
}

int main()
{
    int *arr, *newArray, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    newArray = (int *)malloc(n*sizeof(int));
    arr = (int *)malloc(n*sizeof(int));
    
    accept(arr, n);
    printf("Entered array is: ");
    display(arr, n);

    int count = removeDuplicates(arr, newArray);
    printf("Duplicates removed, new array is %d: ", count);
    display(newArray, count);

    
    return 0;
}