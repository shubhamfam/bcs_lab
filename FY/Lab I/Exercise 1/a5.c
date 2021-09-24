/*5. Accept two numbers and print arithmetic and harmonic mean of the two numbers 
(Hint: AM= (a+b)/2  , HM = ab/(a+b) ) */
#include <stdio.h>
int main()
{
    int n1, n2;
    float arithmetic_mean, harmonic_mean;

    printf("Enter two numbers : ");
    scanf("%d%d", &n1, &n2);

    arithmetic_mean = (n1 + n2) / 2;
    harmonic_mean = (n1 * n2) / (n1 + n2);

    printf("Arithmetic Mean : %f\n", arithmetic_mean);
    printf("Harmonic Mean : %f\n", harmonic_mean);
    return 0;
}