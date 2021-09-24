/*3. Write a program to accept real number x and integer n and calculate the sum of first n terms of the series
1/x + 2/x^2 + 3/x^3 + ..
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum = 0;
    int n, i = 1;

    printf("Enter a real number x: \n");
    scanf("%f", &x);
    printf("Enter number of terms: \n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += (i / pow(x, i));
        ++i;
    }
    printf("Sum: %f\n", sum);
    return 0;
}