/*7. Write a program to accept a character, an integer n and display the next n characters.*/
#include <stdio.h>
int main()
{
    char ch;
    int n, i = 1;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Enter number of next characters to be displayed: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%c ", ++ch);
        ++i;
    }

    return 0;
}