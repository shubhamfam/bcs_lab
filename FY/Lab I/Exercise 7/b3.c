/*3. Write a function power, which calculates x . Write another function, which calculates n! Using
for loop. Use these functions to calculate the sum of first n terms of the Taylor series:*/
#include <stdio.h>

float power(float, int);
int factorial(int);

int main()
{
    int num;
    float x, sum = 0;

    printf("Enter x (sin(x): ");
    scanf("%f", &x);

    printf("Enter number of temrs: ");
    scanf("%d", &num);

    for (int i = 1, count = 1; count <= num; i += 2, count++)
    {
        if (count % 2 == 0)
            sum -= power(x, i) / factorial(i);
        else
            sum += power(x, i) / factorial(i);
    }

    printf("sum of first n terms of the Taylor series = %f\n", sum);
    return 0;
}

float power(float x, int y)
{
    float pow = 1;

    for (int i = 1; i <= y; i++)
    {
        pow *= x;
    }
    return pow;
}

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 1; --i)
    {
        fact *= i;
    }
    return fact;
}
