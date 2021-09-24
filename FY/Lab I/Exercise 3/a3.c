#include <stdio.h>

int main()
{
    int x, y, option, n, temp;

    printf("Enter two integers(x & y): ");
    scanf("%d%d", &x, &y);

    printf("\n1.Equality\n2.Less Than\n3.Quotient & Remainder\n4.Range\n5.Swap");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        x == y ? printf("x is equal to y") : printf("x is not equal to y");
        break;
    case 2:
        x < y ? printf("x is less than y\n") : printf("x is not less than y\n");
        break;
    case 3:
        printf("x/y Quotient: %d, Remainder: %d\n", x / y, x % y);
        break;
    case 4:
        printf("Enter a number:\n");
        scanf("%d", &n);
        if (n >= x && n <= y)
            printf("%d lies between %d & %d\n", n, x, y);
        else
            printf("%d does not lie between %d & %d\n", n, x, y);
        break;
    case 5:
        printf("Before Swap: x=%d & y=%d\n", x, y);
        temp = x;
        x = y;
        y = temp;
        printf("After Swap: x=%d & y=%d\n", x, y);
        break;
    default:
        printf("Invalid Option");
    }

    return 0;
}