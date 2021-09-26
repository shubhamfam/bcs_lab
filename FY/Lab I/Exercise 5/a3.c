/*
Modify the sample program 1 to display n lines as follows (here n=4).
A B C D
E F G
H I
J */

#include <stdio.h>

int main()
{
    int n;
    char ch = 'A';

    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c\t", ch++);
        }
        printf("\n");
    }

    return 0;
}