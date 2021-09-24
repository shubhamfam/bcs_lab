/* 1. Accept dimensions of a cylinder and print the surface area and volume 
(Hint: surface area = 2πr2 + 2πrh, volume = πr2h)*/
#include <stdio.h>
#define PI 3.142857

void main()
{
    float radius, height, surface_area, volume;

    //accept dimensions
    printf("Enter radius of a cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of a cylinder: ");
    scanf("%f", &height);

    //calculation
    surface_area = 2 * PI * radius * (radius + height);
    volume = PI * radius * radius * height;

    printf("\nSurface Area of a cylinder: %f", surface_area);
    printf("\nVolume of a cylinder: %f", volume);

}