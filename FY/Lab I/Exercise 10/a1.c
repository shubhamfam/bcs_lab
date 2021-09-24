/*1. Write a program to accept a matrix A of size mXn and store its transpose in matrix B. Display
matrix B. Write separate functions.*/
#include <stdio.h>
void transposeMatrix(int A[10][10], int B[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            B[i][j] = A[j][i];
}

void display2DArray(int arr[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}

void accept2DArray(int arr[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value for A[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main()
{
    int m, n, A[10][10], transpose[10][10];

    printf("\nEnter dim. of matrix A: ");
    scanf("%d%d", &m, &n);

    accept2DArray(A, m, n);
    printf("\nMatrix A = ");
    display2DArray(A, m, n);

    printf("\nTranspose of A = ");
    transposeMatrix(A, transpose, m, n);
    display2DArray(transpose, n, m);
    return 0;
}