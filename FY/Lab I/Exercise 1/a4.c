/* 4.  Accept  inner  and  outer  radius  of  a  ring  and  print  the  perimeter
  and  area  of  the  ring  
(Hint: perimeter = 2 π (a+b) , area = π (a2-b2) ) */
#include <stdio.h>
#define PI 3.142857

int main()
{
    float in_radius, out_radius, perimeter, area;

    printf("Inner Radius of a ring : ");
    scanf("%f", &in_radius);
    printf("Outer Radius of a ring : ");
    scanf("%f", &out_radius);

    perimeter = 2 * PI * (in_radius + out_radius);
    area = PI * (out_radius * out_radius - in_radius * in_radius);

    printf("Perimeter : %f", perimeter);
    printf("Area : %f", area);
    return 0;
}