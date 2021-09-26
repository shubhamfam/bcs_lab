/*1. Write a function isEven, which accepts an integer as parameter and returns 1 if the number is
even, and 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even
or odd.*/
#include <stdio.h>
int isEven(int);

int main()
{
    int num, o;

    do
    {
        printf("Enter a number (0 to exit program): ");
        scanf("%d", &num);
        if (isEven(num))
            printf("%d is even\n", num);
        else
            printf("%d is odd\n", num);

    } while (num != 0);

    return 0;
}

int isEven(int num)
{
   return num % 2 == 0 ? 1 : 0;
}