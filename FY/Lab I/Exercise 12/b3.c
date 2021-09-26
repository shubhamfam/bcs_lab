/*3. Write a function which displays a string in the reverse order. (Use recursion)*/
#include <stdio.h>
#include <stdlib.h>
void displayInReverse(char *str)
{
    if (*str)
    {
        displayInReverse(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char *str;
    str = (char *)malloc(sizeof(char *));
    printf("Enter a string: ");
    scanf("%s", str);
    displayInReverse(str);

    return 0;
}