/*1. Accept the number of rows (m) and columns (n) for a matrix and dynamically allocate
memory for the matrix. Accept and display the matrix using pointers. Hint: Use an array of
pointers.*/

#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"
int main()
{
    int m, n, **matrix;

    printf("Enter no. of rows and columns: ");
    scanf("%d%d", &m, &n);

    matrix = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Enter matrix elements: ");
    accept2dArray(matrix, m, n);

    printf("Matrix elements are: \n");
    display2dArray(matrix,m,n);

    for (int i = 0; i < m; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
    return 0;
}
