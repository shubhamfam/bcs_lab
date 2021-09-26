/*4. Write a recursive C function to calculate x^y. (Do not use standard library function)*/
#include <stdio.h>

int power(int, int);

int main()
{
    int x, y;
    printf("Enter base x and power y: ");
    scanf("%d%d", &x, &y);

    printf("%d^%d = %d\n", x, y, power(x, y));
}

int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}