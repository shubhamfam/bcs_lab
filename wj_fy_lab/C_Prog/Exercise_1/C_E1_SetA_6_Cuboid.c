#include<stdio.h>

int main(){

    float l, b, h, surf_area, volume;

    printf("Enter l, b and h :\n");
    scanf("%f %f %f", &l, &b, &h);

    surf_area = 2 * (l*b + l*h + b*h);
    volume = l * b * h;

    printf("\nSurface Area = %.2f", surf_area);
    printf("\nVolume = %.2f", volume);
    

    return 0;
}

/*
Enter l, b and h :
3 4 5

Surface Area = 94.00
Volume = 60.00
*/