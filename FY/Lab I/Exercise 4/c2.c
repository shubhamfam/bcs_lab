/*2. Write a program which accepts a number and checks if the number is a palindrome (Hint
number = reverse of number)
Example: number = 3472 Output: It is not a palindrome
number = 262, Output : It is a palindrome*/
#include <stdio.h>

int main()
{
    int num, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int n = num;

    while (n > 0)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    if (num == reverse)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
        
    return 0;
}