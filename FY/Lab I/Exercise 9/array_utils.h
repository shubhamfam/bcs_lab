#include <stdio.h>
#include <stdlib.h>

int *initArray(int *arr, int n)
{
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = i + 100;
    return arr;
}

void accept(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
void display(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void display1DArray(const int *arr)
{
    int i = 0;
    while (*(arr + i))
    {
        printf("%d ", *(arr + i));
        ++i;
    }
    printf("\n");
}

int arrayHas(int *arr, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return 1;
    }
    return 0;
}

int setHas(const int *arr, int num)
{
    int i = 0;
    while (*(arr + i))
    {
        if (num == *(arr + i))
            return 1;
        ++i;
    }
    return 0;
}
/*int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}*/