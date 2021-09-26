/*1. Write a menu driven program to perform the following operations using the Taylor series.
Accept suitable data for each option. Write separate functions for each option.*/
#include <stdio.h>
#include "../util.h"

float sine(float, int);
float cosine(float, int);
float exponential(float, int);

int main()
{
    int o, num;
    float x;

    printf("Operations using taylor series\n");
    printf("1. e^x 2.sin(x) 3.cos(x)");
    scanf("%d", &o);

    switch (o)
    {
    case 1:
        printf("Enter x (e^x): ");
        scanf("%f", &x);
        printf("Enter number of temrs: ");
        scanf("%d", &num);

        printf("e^%f = %f", x, exponential(x, num));
        break;
    case 2:
        printf("Enter x (sin(x): ");
        scanf("%f", &x);
        printf("Enter number of temrs: ");
        scanf("%d", &num);
        printf("sin(%f) = %f", x, sine(x, num));
        break;
    case 3:
        printf("Enter x (cos(x): ");
        scanf("%f", &x);
        printf("Enter number of temrs: ");
        scanf("%d", &num);
        printf("cos(%f) = %f", x, cosine(x, num));
        break;
    }
}

float sine(float x, int num)
{
    float sum = 0;
    for (int i = 1, count = 1; count <= num; i += 2, count++)
    {
        if (count % 2 == 0)
            sum -= power(x, i) / factorial(i);
        else
            sum += power(x, i) / factorial(i);
    }
    return sum;
}

float cosine(float x, int num)
{
    float sum = 0;
    for (int i = 0, count = 1; count <= num; i += 2, count++)
    {
        if (count % 2 == 0)
            sum -= power(x, i) / factorial(i);
        else
            sum += power(x, i) / factorial(i);
    }
    return sum;
}

float exponential(float x, int num)
{
    float sum;
    for (int i = 0, count = 1; count <= num; i += 1, count++)
    {
        sum += power(x, i) / factorial(i);
    }
    return sum;
}
