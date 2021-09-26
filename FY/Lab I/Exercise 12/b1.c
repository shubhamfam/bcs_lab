/*1. Write a menu driven program which performs the following operations on strings. Write a
separate function for each option. Use pointers
i. Check if one string is a substring of another.
ii. Count number of occurrences of a character in the string.
iii. Replace all occurrences of a character by another.*/
#include <stdio.h>
#include <stdlib.h>

int substr(const char *str, const char *substr)
{
    for (int i = 0; str[i] != '\0' && substr[i] != '\0'; ++i)
    {
        
    }
}

int main()
{
    int o;
    char *str, *substr, ch, replacement;

    str = (char *)malloc(sizeof(char *));
    substr = (char *)malloc(sizeof(char *));

    do
    {
        printf("Enter a string: ");
        scanf("%s", str);

        printf("\n1.Check is substring\n2.Count occurences of a character\n3.Replace all occurrences of a character\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("\nEnter a substring: ");
            scanf("%s", substr);
            break;
        case 2:
            printf("Enter the character: ");
            scanf("%c", &ch);
            break;
        case 3:
            printf("Enter the character to be replaced: ");
            scanf("%c", &ch);
            printf("Enter replacement character: ");
            scanf("%c", &replacement);
            break;

        default:
            break;
        }

    } while (o != 0);

    return 0;
}
