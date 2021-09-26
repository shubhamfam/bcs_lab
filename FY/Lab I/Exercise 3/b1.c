/*1. Accept radius from the user and write a program having menu with the following options and
corresponding actions*/
#include <stdio.h>
#define PI 3.14258

int main()
{
    float radius, area, circumference, volume;
    int option;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("\n1.Area of Circle\n2.Circumference of Circle\n3.Volume of Sphere\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        area = PI * radius * radius;
        printf("Area of Circle: %f\n", area);
        break;
    case 2:
        circumference = 2 * PI * radius;
        printf("Circumference of Circle: %f\n", circumference);
        break;
    case 3:
        volume = (4 / 3) * PI * radius * radius * radius;
        printf("Volume of Sphere: %f\n", volume);
        break;
    default:
        printf("Invalid option\n");
    }

    return 0;
}