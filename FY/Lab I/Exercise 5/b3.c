/*3. Display all perfect numbers below 500. [A perfect number is a number, such that the sum of
its factors is equal to the number itself]. Example: 6 (1 + 2 + 3), 28 (1+2+4+7+14)*/
#include <stdio.h>

int main()
{
    int factor, sum = 0;

    for (int i = 1; i <= 500; i++, sum = 0)
    {
        for (factor = 1; factor <= i / 2; factor++)
        {
            if (i % factor == 0)
            {
                sum += factor;
            }
        }

        if (i == sum)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}