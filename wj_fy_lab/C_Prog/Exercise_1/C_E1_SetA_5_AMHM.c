#include<stdio.h>

int main(){

    float a, b, am, hm;

    printf("Enter a and b :\n");
    scanf("%f %f", &a, &b);

    am = (a+b)/2.0;
    hm = (a*b)/(a+b);

    printf("\nAM = %.2f", am);
    printf("\nHM = %.2f", hm);
    

    return 0;
}

/*
Enter a and b :
3 5

AM = 4.00
HM = 1.88
*/