/*3. Write a program which accepts two integers x and y and performs x<<y and x>>y. Display
the result in binary.*/
#include <stdio.h>

void displaybits(unsigned int);

int main()
{
    int x, y;

    printf("Enter two variables: ");
    scanf("%d%d", &x, &y);

    printf("x<<y = ");
    displaybits(x << y);

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