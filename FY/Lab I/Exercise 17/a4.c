/*4. Define a macro EQUALSTR which compares two strings x and y and gives 1 if equal and 0
otherwise. Use this macro to accept two strings from the user and check if they are equal.*/
#include <stdio.h>
#include <string.h>

#define EQUALSTR(x, y) (strcmp(x, y) == 0)

int main()
{
    char str2[10], str1[10];

    printf("Enter 1st string: ");
    scanf("%s", str1);
    printf("Enter 2nd string: ");
    scanf("%s", str2);
    EQUALSTR(str1, str2) ? printf("Equal strings\n") : printf("Not equal strings\n");

    return 0;
}