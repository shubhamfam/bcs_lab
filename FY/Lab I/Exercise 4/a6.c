/*6. Write a program to accept an integer and reverse the number. Example: Input: 546, Output
645*/
#include <stdio.h>
int main()
{
    int num, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    printf("%d\n", reverse);

    return 0;
}