/*1. Write a menu driven program to perform the following operations on strings using standard
library functions:
Length
Copy
Concatenation
Compare
Reverse
Uppercase
Lowercase
Check case*/
#include <stdio.h>
#include <string.h>

int main()
{
    int o;
    char str[20], str2[20];

    do
    {
        printf("\n1.Length\t2.Copy  \t3.Concatenation\t4.Compare\n5.Reverse\t6.Uppercase\t7.Lowercase\t8.Check Case\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s", str);
            printf("Length of this string %s : %ld\n", str, strlen(str));
            break;
        case 2:
            printf("Enter a string: ");
            scanf("%s", str);
            strcpy(str2, str);
            printf("Copied String: %s", str2);
            break;
        case 3:
            printf("\n Give the first string: ");
            scanf("%s", str);
            printf("\n Give the second string: ");
            scanf("%s", str2);
            strcat(str, str2);
            printf("Concatenated: %s", str);
            break;
        case 4:
            printf("\n Give the first string: ");
            scanf("%s", str);
            printf("\n Give the second string: ");
            scanf("%s", str2);
            printf(strcmp(str, str2) ? "not equal" : "equal strings");
            break;
        case 5:
            printf("Enter a string: ");
            scanf("%s", str);
            printf("Reversed String: %s", strrev(str));
            break;
        case 6:
            printf("Enter a string: ");
            scanf("%s", str);
            printf("Uppercase String: %s", strupr(str));
            break;
        case 7:
            printf("Enter a string: ");
            scanf("%s", str);
            printf("Lowercase String: %s", strlwr(str));
            break;
        case 8:
        
            break;
        default:
            break;
        }

    } while (o != 0);

    return 0;
}