#include<stdio.h>

int main(){

    float a, b, peri, area;

    printf("Enter outer and inner radius :\n");
    scanf("%f %f", &a, &b);

    peri = 2 * 3.142 * (a+b);
    area = 3.142 * ((a*a) - (b*b));

    printf("\nperi = %.2f", peri);
    printf("\narea = %.2f", area);
    

    return 0;
}

/*
Enter outer and inner radius :
5 4

peri = 56.56
area = 28.28
*/