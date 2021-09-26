/*2. Write a recursive function to calculate the sum of digits of a number till you get a single digit
number. Example: 961 -> 16 -> 5. (Note: Do not use a loop)*/
#include <stdio.h>

int singularSumOfDigits(int);

int main()
{
    int num, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, singularSumOfDigits(num));
    return 0;
}

int singularSumOfDigits(int num)
{
    if (num < 10)
        return num;
    else
        return singularSumOfDigits(singularSumOfDigits((num % 10) + singularSumOfDigits(num / 10)));
}