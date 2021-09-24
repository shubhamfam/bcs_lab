/*3. Write a program to accept two integers x and n and compute x^n*/
#include <stdio.h>

int main()
{
    int x, n, i, power = 1;

    printf("Enter integers x & n: ");
    scanf("%d%d", &x, &n);
    i = n;
    
    while (i >= 1)
    {
        power *= x;
        --i;
    }

    printf("\n%d^%d = %d\n", x, n, power);
    return 0;
}