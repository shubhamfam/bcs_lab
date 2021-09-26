/*3. Write a program to accept a decimal number and convert it to binary, octal and hexadecimal.
Write separate functions.*/
#include <stdio.h>
#include <stdlib.h>

int decimalToBinary(int *, int);
int decimalToOctal(int *, int);
int decimalToHex(int *, int);
void reverseDisplay(int *, int);

int main()
{
    int num, *hex, *binary, *octal, size = 0, o;

    printf("Enter a decimal number: \n");
    scanf("%d", &num);

    do
    {
        printf("\n1.Binary\t2.Octal\t3.Hexadecimal");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            printf("Binary of the decimal %d = ", num);
            binary = (int *)malloc(sizeof(int));
            size = decimalToBinary(binary, num);
            reverseDisplay(binary, size);
            break;
        case 2:
            printf("Octal of the decimal %d = ", num);
            octal = (int *)malloc(sizeof(int));
            size = decimalToOctal(octal, num);
            reverseDisplay(octal, size);
            break;
        case 3:
            printf("Hexadecimal of the decimal %d = ", num);
            hex = (int *)malloc(sizeof(int));
            size = decimalToHex(hex, num);
            break;
        }
    } while (o != 0);

    return 0;
}

int decimalToBinary(int *bin, int num)
{
    int i;
    for (i = 0; num > 0; i++)
    {
        bin[i] = num % 2;
        num /= 2;
    }
    return i;
}

int decimalToOctal(int *oct, int num)
{
    int k;
    for (k = 0; num > 0; k++)
    {
        oct[k] = num % 8;
        num /= 8;
    }
    return k;
}
int decimalToHex(int *hex, int num)
{
    int k;
    for (k = 0; num > 0; k++)
    {
        hex[k] = num % 16;
        if (num % 16 < 10)
            hex[k] = 48 + num % 16;
        else
            hex[k] = 55 + num % 16;

        num /= 16;
    }
    for (int i = k; i >= 0; i--)
        printf("%c", hex[i]);
    return k;
}

void reverseDisplay(int *arr, int size)
{
    for (int i = size - 1; i >= 0; --i)
    {
        printf("%d", arr[i]);
    }
}