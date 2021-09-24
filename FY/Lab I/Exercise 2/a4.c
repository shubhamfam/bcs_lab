/*4. Write a program to accept a number and check if it is divisible by 5 and 7.*/
#include <stdio.h>

int main()
{

    int num;
    int div_by_5 = 0, div_by_7 = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
        div_by_5 = 1;
    if (num % 7 == 0)
        div_by_7 = 1;

    if (div_by_5 && div_by_7)
        printf("%d is divisible by 5 & 7\n", num);
    else if (div_by_5)
        printf("%d is divisible by 5 but not by 7\n", num);
    else if (div_by_7)
        printf("%d is divisible by 7 but not by 5\n", num);
    else
        printf("%d is neither divisible by 5 nor by 7", num);

    return 0;
}