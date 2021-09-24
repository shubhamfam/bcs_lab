/*3. Write a recursive C function to print the digits of a number in reverse order. Use this function
in main to accept a number and print the digits in reverse order separated by tab.
Example 3456
6 5 4 3
(Hint: Recursiveprint(n) = print n if n is single digit number
                         = print n % 10 + tab + Recursiveprint( n/10)*/
#include <stdio.h>

void reverse(int num)
{
    if (num < 10)
        printf("%d\t", num);
    else
    {
        printf("%d\t", (num % 10));
        reverse(num / 10);
    }
}

int main()
{
    int num;
    printf("Enter a number to reverse: \n");
    scanf("%d", &num);

    reverse(num);

    return 0;
}