/*1. Write a program to accept an integer n and display all even numbers upto n.*/
#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (i <= num)
    {
        if (i % 2 == 0)
            printf("%d ",i);
        
        ++i;
    }

    return 0;
}