/*3. Write a function, which accepts an integer array and an integer as parameters and counts
the occurrences of the number in the array*/
#include <stdio.h>
#include "array_utils.h"

int countOccurrences(int *arr, int n, int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            ++count;
    }
    return count;
}

int main()
{
    int *arr, n, num;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter array: ");
    accept(arr, n);
    printf("Entered array: ");
    display(arr, n);

    printf("\n\nEnter number to count occurences of: ");
    scanf("%d", &num);
    printf("\nOccurences of %d in array: %d times\n", num, countOccurrences(arr, n, num));

    return 0;
}