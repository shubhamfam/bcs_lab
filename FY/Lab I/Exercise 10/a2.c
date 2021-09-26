/*2. Write a program to add and multiply two matrices. Write separate functions to accept,
display, add and multiply the matrices. Perform necessary checks before adding and multiplying
the matrices.*/
#include <stdio.h>
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
    printf("\n");
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

void multiplyMatrix(int mul[10][10], int A[10][10], int B[10][10], int m, int r, int c)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < r; k++)
            {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[10][10], B[10][10], mul[10][10], m, n, r, c;

    printf("Enter dim. of matrix A: ");
    scanf("%d%d", &m, &n);
    accept2DArray(A, m, n);
    display2DArray(A, m, n);

    printf("Enter dim. of matrix B: ");
    scanf("%d%d", &r, &c);
    accept2DArray(B, r, c);
    display2DArray(B, r, c);

    multiplyMatrix(mul, A, B, m, r, c);
    display2DArray(mul, m, c);
    return 0;
}