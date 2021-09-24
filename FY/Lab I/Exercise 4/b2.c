/*2. Write a program to accept real number x and integer n and calculate the sum of first n terms
of the series x+ 3x+5x+7x+…*/
#include <stdio.h>

int main()
{
    float x, sum;
    int n, i = 1, coefficient=1;

    printf("Enter a real number x: \n");
    scanf("%f", &x);
    printf("Enter number of terms: \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += (coefficient * x);
        coefficient += 2;
        ++i;
    }
    printf("Sum: %f\n", sum);
    return 0;
}