/*2. Write a program having menu that has three options - add, subtract or multiply two fractions.
The two fractions and the options are taken as input and the result is displayed as output. Each
fraction is read as two integers, numerator and denominator.*/
#include <stdio.h>

struct Fraction
{
    int numerator;
    int denominator;
};

int main()
{
    struct Fraction f1, f2, result;
    int o;

    printf("\nEnter two fractions\n");
    printf("Enter numerator & denominator of 1st fraction: ");
    scanf("%d%d", &f1.numerator, &f1.denominator);
    printf("Enter numerator & denominator of 2nd fraction: ");
    scanf("%d%d", &f2.numerator, &f2.denominator);

    do
    {
        printf("\nMENU: 1.Add 2.Subtract 3.Multiply: ");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            result.denominator = f1.denominator * f2.denominator;
            result.numerator = f1.denominator * f2.numerator + f1.numerator * f2.denominator;

            printf("\n(%d/%d) + (%d/%d) = (%d/%d)\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, result.numerator, result.denominator);
            break;

        case 2:
            result.denominator = f1.denominator * f2.denominator;
            result.numerator = f2.denominator * f1.numerator - f2.numerator * f1.denominator;
            printf("\n(%d/%d) - (%d/%d) = (%d/%d)\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, result.numerator, result.denominator);
            break;

        case 3:
            result.numerator = f1.numerator * f2.numerator;
            result.denominator = f1.denominator * f2.denominator;
            printf("\n(%d/%d) x (%d/%d) = (%d/%d)\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, result.numerator, result.denominator);
            break;
            
        default:
            break;
        }
    } while (o != 0);
    return 0;
}