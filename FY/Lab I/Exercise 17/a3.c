/*3. Define a macro EQUALINT which compares two parameters x and y and gives 1 if equal
and 0 otherwise. Use this macro to accept pairs of integers from the user. Calculate the sum of
digits of both and continue till the user enters a pair whose sum of digits is not equal.*/
#include <stdio.h>

#define EQUALINT(x, y) (x == y)

int sum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int equalSum(int x, int y)
{
    return sum(x)==sum(y);
}

int main()
{
    int x, y;

    do
    {
        printf("Enter two integers: ");
        scanf("%d%d", &x, &y);
    } while (!EQUALINT(x, y) && !equalSum(x, y));
}