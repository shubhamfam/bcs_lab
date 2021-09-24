/*2. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) 
and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15)*/
#include <stdio.h>
int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5 / 9) * (fahrenheit - 32);
    kelvin = celsius + 273.15;

    printf("%.2f Fahrenheit = %.2f Celsius = %.2f Kelvin\n", fahrenheit, celsius, kelvin);

    return 0;
}