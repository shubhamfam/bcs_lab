/*2. Write a function which accepts a number and three flags as parameters. If the number is
even, set the first flag to 1. If the number is prime, set the second flag to 1. If the number is
divisible by 3 or 7, set the third flag to 1. In main, accept an integer and use this function to check
if it is even, prime and divisible by 3 or 7. (Hint : pass the addresses of flags to the function)*/
#include <stdio.h>
int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void numberCheck(int num, int *is_even, int *is_prime, int *is_div_by_3_7)
{
    *is_even = (num % 2 == 0) ? 1 : 0;
    *is_prime = isPrime(num);
    *is_div_by_3_7 = ((num % 3 == 0) || (num % 7 == 0));
}

int main()
{
    int num, is_even, is_prime, is_div_by_3_7;

    printf("Enter an integer: ");
    scanf("%d", &num);

    numberCheck(num, &is_even, &is_prime, &is_div_by_3_7);

    printf("is even: %d\nis prime: %d\nis divisible by 3 or 7: %d\n", is_even, is_prime, is_div_by_3_7);
}