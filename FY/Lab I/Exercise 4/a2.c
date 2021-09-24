/*2. Accept two integers x and y and calculate the sum of all integers between x and y (both
inclusive)*/
#include <stdio.h>

int main()
{
    int x, y, sum = 0;

    printf("Enter integers x and y: ");
    scanf("%d%d", &x, &y);

    int i = (x < y) ? x : y;
    int max = (i == x) ? y : x;

    while (i <= max)
    {
        sum += i;
        ++i;
    }

    printf("%d\n", sum);
    return 0;
}
