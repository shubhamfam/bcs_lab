/*2. Write a program, which accepts two integers and an operator as a character (+ - * /),
performs the corresponding operation and displays the result.*/
#include <stdio.h>

int main()
{
    int num1, num2, result;
    char ch;
    
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &ch);
    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("Invalid operator");
        break;
    }
    printf("%d %c %d = %d\n", num1, ch, num2, result);

    return 0;
}