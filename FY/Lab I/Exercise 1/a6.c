/*6.  Accept  three  dimensions  length  (l),  breadth(b) and  height(h)  
of  a  cuboid  and  print  surface area and volume
 (Hint : surface area=2(lb+lh+bh ), volume = lbh )*/

#include <stdio.h>
int main()
{
    float length, breadth, height, surface_area, volume;

    printf("Enter length, breadth, height of a cuboid: ");
    scanf("%f%f%f", &length, &breadth, &height);

    surface_area = 2 * (length * breadth + length * height + breadth * height);
    volume = length * breadth * height;

    printf("\nSurface area of a cuboid : %f ", surface_area);
    printf("\nVolume of a cuboid : %f ", volume);

    return 0;
}