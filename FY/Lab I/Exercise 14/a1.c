/*1. Write a program to accept 2 integers and perform bitwise AND, OR, XOR and Complement.
Display the inputs and results in binary format. Use the function in the above exercise.*/
#include <stdio.h>
void displaybits(unsigned int);

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    printf("%d = ", num1);
    displaybits(num1);
    printf(" (In Binary)\n");
    printf("%d = ", num2);
    displaybits(num2);
    printf(" (In Binary)\n");

    printf("\nBitwise AND operation of %d & %d:\n", num1, num2);
    printf("%d = ", num1 & num2);
    displaybits(num1 & num2);
    printf(" (In Binary)\n");

    printf("\nBitwise OR operation of %d | %d:\n", num1, num2);
    printf("%d = ", num1 | num2);
    displaybits(num1 | num2);
    printf(" (In Binary)\n");

    printf("\nBitwise XOR operation of %d ^ %d:\n", num1, num2);
    printf("%d = ", num1 ^ num2);
    displaybits(num1 ^ num2);
    printf(" (In Binary)\n");
    return 0;
}

void displaybits(unsigned int n)
{
    unsigned int mask = 32768;
    /*set MSB of mask to 1 */
    while (mask > 0)
    {
        if ((n & mask) == 0)
            printf("0");
        else
            printf("1");
        mask = mask >> 1; /* shift mask right */
    }
}