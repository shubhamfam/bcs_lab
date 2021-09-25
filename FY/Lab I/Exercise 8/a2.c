/*2. Write a recursive C function to calculate the GCD of two numbers. Use this function in main.
The GCD is calculated as :
gcd(a,b) = a if b = 0 
         = gcd (b, a mod b) otherwise*/
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers to find gcd: \n");
    scanf("%d%d", &a, &b);

    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

    return 0;
}
