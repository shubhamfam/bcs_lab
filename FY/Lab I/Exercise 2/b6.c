/*6. Write a program to calculate the roots of a quadratic equation. Consider all possible cases.*/
#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c;
    float root_1, root_2;

    printf("Enter a,b &c (ax^2+bx+c): ");
    scanf("%f%f%f", &a, &b, &c);

    //ax^2+bx+c
    // roots = (-b (+/-) sqrt(b^2 - 4ac)) / 2a
    float discriminant = sqrt(pow(b, 2) - 4 * a * c);

    root_1 = (-b + discriminant) / (2 * a);
    root_2 = (-b - discriminant) / (2 * a);

    printf("roots of the equation %fx^2+%fx+%f are: %f,%f ", a, b, c, root_1, root_2);

    return 0;
}