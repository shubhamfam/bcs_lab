/*5. Write a program to accept an integer and count the number of digits in the number.*/
#include <stdio.h>

int main()
{
    int num, count = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int n = num;

    while (n / 10 != 0)
    {
        n /= 10;
        count++;
    }

    printf("There are %d digits in %d\n", count, num);
    return 0;
}