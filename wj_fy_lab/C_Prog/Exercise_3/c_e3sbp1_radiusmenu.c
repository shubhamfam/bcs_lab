#include<stdio.h>

int main() {
    float radius, area, perimeter, volume;
    int op;

    printf("Enter radius: \n");
    scanf("%f", &radius);

    do{
        printf("Select Operation\n1. Area of Circle\n2. Perimeter of Circle\n3. Volume of Sphere\n0. Exit");
        scanf("%d", &op);

        switch(op){
            case 1:
                area = 3.142 * radius * radius;
                printf("Area of Circle = %f\n", area);
                break;
            case 2:
                perimeter = 2 * 3.142 * radius;
                printf("Perimeter of Circle = %f\n", perimeter);
                break;
            case 3:
                volume = (4.0/3.0) * 3.142 * radius * radius * radius;
                printf("Volume of Sphere = %f\n", volume);
                break;
            case 0:
                break;
            default:
                printf("Invalid Input.\n");
        }
    }while(op);
}