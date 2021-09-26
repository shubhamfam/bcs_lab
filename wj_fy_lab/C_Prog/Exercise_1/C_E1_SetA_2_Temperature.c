#include<stdio.h>

int main(){

    float celsius, fahrenheit, kelvin;

    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0) * (fahrenheit - 32.0);
    kelvin = celsius + 273.15;

    printf("\nTemperature in F : %3.2fF", fahrenheit);
    printf("\nTemperature in C : %3.2fC", celsius);
    printf("\nTemperature in K : %3.2fK", kelvin);

    return 0;
}

/*
Enter Temperature in Fahrenheit :
47

Temperature in F : 47.00F
Temperature in C : 8.33C
Temperature in K : 281.48K
*/