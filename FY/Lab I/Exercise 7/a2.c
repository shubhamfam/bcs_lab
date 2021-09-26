/*2. Write a function, which accepts a character and integer n as parameter and displays the next
n characters.*/
#include <stdio.h>

void nextCharacters(char, int);

int main()
{
    char ch;
    int n;

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter number of characters to be displayed: ");
    scanf("%d", &n);

    nextCharacters(ch, n);
    return 0;
}

void nextCharacters(char ch, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c\t", ++ch);
    }
}