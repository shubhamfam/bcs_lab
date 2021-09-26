/*5. Write a program, which accepts a number n and displays each digit in words. Example: 6702
Output = Six-Seven-Zero-Two. (Hint: Reverse the number and use a switch statement)*/
#include <stdio.h>

int main()
{
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    // printf("%d\n", reverse);

    while (reverse > 0)
    {
        digit = reverse % 10;
        reverse /= 10;

        switch (digit)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        }
        if (reverse != 0)
            printf("-");
    }

    return 0;
}