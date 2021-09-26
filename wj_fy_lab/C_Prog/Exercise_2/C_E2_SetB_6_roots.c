#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, discriminant=0, root1=0, root2=0, real=0, imag=0;

    printf("Enter the coefficients of equation (a,b,c):\n");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = (b*b) - (4*a*c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);

        printf("root1 : %.2f\nroot2 : %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = (-b)/(2*a);
        printf("root1 = root2 = %.2f\n", root1);
    } else {
        real = (-b)/(2*a);
        imag = sqrt(-discriminant)/(2*a);
        printf("root1 : %.2f + %.2fi\nroot2 : %.2f - %.2fi\n", real, imag, real, imag);
    }

    return 0;
}