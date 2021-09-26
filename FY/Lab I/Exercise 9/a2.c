/*2. Write a function for Linear Search, which accepts an array of n elements and a key as
parameters and returns the position of key in the array and -1 if the key is not found. Accept n
numbers from the user, store them in an array. Accept the key to be searched and search it using
this function. Display appropriate messages.*/
#include <stdio.h>
#include "array_utils.h"

int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n, key, position;

    printf("How many numbers: ");
    scanf("%d", &n);

    int arr[n];
    accept(arr, n);

    printf("Enter key to search: ");
    scanf("%d", &key);

    position = linearSearch(arr, n, key);

    if (position == -1)
        printf("key not found\n");
    else
        printf("key found at index: %d\n", position);

    return 0;
}