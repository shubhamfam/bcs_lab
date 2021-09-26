#include <stdio.h>
int main()
{
    int option;
    float side1, side2, area;

    printf("\n1.Area of square\n2.Area of rectangle\n3.Area of triangle\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Enter length of square: \n");
        scanf("%f", &side1);
        area = side1 * side1;
        break;
    case 2:
        printf("Enter length & breadth of rectangle: \n");
        scanf("%f%f", &side1, &side2);
        area = side2 * side1;
        break;
    case 3:
        printf("Enter base & height of triangle: \n");
        scanf("%f%f", &side1, &side2);
        area = 0.5 * side1 * side2;
        break;
    default:
        printf("Invalid option");
    }

    printf("\nArea: %f\n", area);

    return 0;
}