/* 2. Accept two integers from the user and interchange them. 
Display the interchanged numbers. */
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d & b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping: a = %d & b = %d\n", a, b);
    return 0;
}