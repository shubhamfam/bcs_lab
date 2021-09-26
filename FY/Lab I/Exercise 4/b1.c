/*1. Write a program to display the first n Fibonacci numbers. (1 1 2 3 5 ……)*/
#include <stdio.h>
int main()
{
    int n, i = 1, first = 0, second = 1, num;

    printf("Enter the number of Fibonacci numbers: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        if (i <= 1)
            num = i;
        else
        {
            num = first + second;
            first = second;
            second = num;
        }
        ++i;
        printf("%d\n", num);
    }
    return 0;
}