/*4. Write a program to find the union and intersection of the two sets of integers (store it in two
arrays).*/
#include <stdio.h>
#include "array_utils.h"

int setHas(const int *arr, int num)
{
    while (*arr)
        if (num == *arr++)
            return 1;
    return 0;
}

int *intersection(int *set1, int *set2)
{
    int *u = (int *)malloc(10 * sizeof(int));
    int i = 0;
    while (*set1)
    {
        if (setHas(set2, *set1))
        {
            u[i] = *set1;
            i++;
        }

        *set1++;
    }
    return u;
}

int *uni(int *set1, int *set2)
{
    int *u = (int *)malloc(10 * sizeof(int));
    int i = 0;

    while (*set1)
    {
        u[i] = *set1;
        ++i;
        *set1++;
    }

    while (*set2)
    {
        if (!setHas(set2, *set2))
        {
            u[i] = *set2;
            ++i;
        }*set2++;
    }

    return u;
}

void display_set(int *arr)
{
    while (*arr)
    {
        printf("%d ", *arr++);
    }
}

int main()
{
    int *set1, *set2, *u, *in;
    int n1, n2;

    printf("Enter size of 1st set: ");
    scanf("%d", &n1);
    printf("Enter 1st set of integers: ");
    set1 = (int *)malloc(n1 * sizeof(int));
    accept(set1, n1);

    printf("Enter size of 2nd set: ");
    scanf("%d", &n2);
    printf("Enter 2nd set of integers: ");
    set2 = (int *)malloc(n2 * sizeof(int));
    accept(set2, n2);

    in = intersection(set1, set2);
    printf("intersection set = ");
    display_set(in);

    u = uni(set1, set2);
    printf("union set = ");
    display_set(u);
    return 0;
}