/*4. Accept three sides of triangle as input, and print whether the triangle is valid or not. (Hint:
The triangle is valid if the sum of each of the two sides is greater than the third side).*/
#include <stdio.h>

int main()
{

    float first, second, third;

    printf("Enter three side of a triangle: ");
    scanf("%f%f%f", &first, &second, &third);

    if (first + second > third && second + third > first && third + first > second)
        printf("The trianle is valid.\n");
    else
        printf("The trianle is invalid.\n");

    return 0;
}