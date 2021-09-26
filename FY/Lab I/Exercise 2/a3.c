/* 3.  Accept  a character as input  and check whether the character is  a digit. 
(Check if it is in the range ‘0’ to ‘9’ both inclusive)*/
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("%c is a digit", ch);
    else
        printf("%c is not a digit\n", ch);

    return 0;
}