/* 8. Accept a character from the user and display its ASCII value.*/
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII Value : %d\n", ch);

    return 0;
}