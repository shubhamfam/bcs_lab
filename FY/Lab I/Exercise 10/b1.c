/*1. Write a menu driven program to perform the following operations on a square matrix. Write
separate functions for each option.
i)
Check if the matrix is symmetric.
ii)
Display the trace of the matrix (sum of diagonal elements).
iii)
Check if the matrix is an upper triangular matrix.*/
#include <stdio.h>
#include "array_utils.h"

void transposeMatrix(int **A, int **B, int m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            B[i][j] = A[j][i];
}

int isSymmetric(int **matrix, int r, int c)
{
    int **transpose;
    transpose = init2dArray(r, c);

    transposeMatrix(matrix, transpose, r, c);
    display2dArray(transpose, r, c);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (matrix[i][j] != transpose[i][j])
                return 0;

    return 1;
}

int findTrace(int **matrix, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += matrix[i][i];
    return sum;
}

int isUpperTriangular(int **matrix, int r, int c)
{
    for (int i = 1; i < r; i++)
        for (int j = 0; j < i; j++)
            if (matrix[i][j] != 0)
                return 0;
    return 1;
}

int main()
{
    int **matrix, r, c, o;

    printf("\nEnter dimensions of a matrix: ");
    scanf("%d%d", &r, &c);

    matrix = init2dArray(r, c);

    printf("\nEnter matrix");
    accept2dArray(matrix, r, c);

    do
    {
        printf("\n1.Check if the matrix is symmetric.\n2.Display the trace of the matrix\n3.Check if the matrix is an upper triangular matrix.\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            isSymmetric(matrix, r, c) ? printf("\nMatrix is symmetric") : printf("\nMatrix is not symmetric");
            break;
        case 2:
            printf("\nTrace of the matrix: %d", findTrace(matrix, r));
            break;
        case 3:
            isUpperTriangular(matrix, r, c) ? printf("\nMatrix is upper triangular") : printf("\nMatrix is not upper triangular");
            break;
        }
    } while (o != 0);

    return 0;
}