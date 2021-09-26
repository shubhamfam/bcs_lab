#include<stdio.h>
#define PI 3.142
int main(){

    float radius, height, surf_area, volume;

    printf("Enter Radius and Height of the Cylinder :\n");
    scanf("%f %f", &radius, &height);

    surf_area = (2*PI*(radius*radius)) + (2*PI*radius*height);
    volume = PI * radius * radius * height;

    printf("\nSurface Area of the Cylinder = %f", surf_area);
    printf("\nVolume of the Cylinder = %f", volume);

    return 0;
}

/*
Enter Radius and Height of the Cylinder :
10 20

Surface Area of the Cylinder = 1885.199951
Volume of the Cylinder = 6284.000000
*/