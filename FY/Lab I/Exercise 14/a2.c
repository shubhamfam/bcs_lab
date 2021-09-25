/*2. Write a program to swap two variables without using a temporary variable. (Hint: Use XOR)*/
#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two variables: ");
    scanf("%d%d", &x, &y);
    printf("before swapping: x = %d and y = %d\n", x, y);
    
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("after swapping: x = %d and y = %d\n", x, y);

    return 0;
}