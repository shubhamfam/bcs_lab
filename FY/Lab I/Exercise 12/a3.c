/*3. A palindrome is a string that reads the same-forward and reverse. Example: “madam” is a
Palindrome. Write a function which accepts a string and returns 1 if the string is a palindrome and
0 otherwise. Use this function in main.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *strrev(char *str)
{
    char *cpy = (char *)malloc(strlen(str) * sizeof(char));
    int i, j;
    for (i = strlen(str)-1, j = 0; i >= 0; i--, ++j)
    {
        cpy[j] = str[i];
    }
    return cpy;
}

int isPalindrome(char *str)
{
    return strcmp(str, strrev(str)) == 0 ? 1 : 0;
}

int main()
{
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    isPalindrome(str) ? printf("\n%s is a palindrome", str) : printf("%s is not a palindrome", str);
    ;

    return 0;
}