/*4. For the following standard functions, write corresponding user defined functions and write a
menu driven program to use them. strcat, strcmp, strrev, strupr*/
#include <stdio.h>
int strlen(char *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
        len++;

    return len;
}

char *strcat(char *str1, char *str2)
{
    int i, j;
    for (i = strlen(str1), j = 0; j < strlen(str2); ++i, ++j)
    {
        str1[i] = str2[j];
    }

    return str1;
}

int strcmp(char *str1, char *str2)
{
    int flag = 0, i = 0;

    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            if (str1[i] > str2[i])
                return 1;
            else if (str1[i] < str2[2])
                return -1;
        }
    }
    return 0;
}

char *strrev(char *str)
{
    char *cpy = (char *)malloc(strlen(str) * sizeof(char));
    int i, j;
    for (i = strlen(str) - 1, j = 0; i >= 0; i--, ++j)
    {
        cpy[j] = str[i];
    }
    return cpy;
}

char *strupr(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }

    return str;
}

int main()
{
    char *str1, *str2;
    int o;
    str1 = (char *)malloc(sizeof(char *));
    str2 = (char *)malloc(sizeof(char *));

    do
    {
        printf("\n1.strcat\t2.strcmp\t3.strrev\t4.strupr\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("Give the first string: ");
            scanf("%s", str1);
            printf("Give the second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated: %s", str1);
            break;
        case 2:
            printf("\n Give the first string: ");
            scanf("%s", str1);
            printf("\n Give the second string: ");
            scanf("%s", str2);
            printf(strcmp(str1, str2) ? "not equal" : "equal strings");
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Reversed String: %s", strrev(str1));
            break;
        case 4:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Uppercase String: %s", strupr(str1));
            break;
        }

    } while (o != 0);

    return 0;
}