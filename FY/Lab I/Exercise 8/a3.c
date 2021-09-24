/*3. Write a recursive function for the following recursive definition. Use this function in main to
display the first 10 numbers of the following series
an = 3                    if n = 1 or 2
   = 2* a n-1 + 3*a n-2   if n > 2
*/
#include <stdio.h>

int a_nseries(int n)
{
    if (n == 1 || n == 2)
        return 3;
    else if (n > 2)
        return 2 * a_nseries(n - 1) + 3 * a_nseries(n - 2);
}

int main()
{
    printf("First 10 numbers of given series: \n");

    for (int i = 1; i <= 10; ++i)
    {
        printf("%d\t", a_nseries(i));
    }

    return 0;
}