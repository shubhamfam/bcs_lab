/*108 1. Accept the x and y coordinates of two points 
and compute the distance between the two points.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter the x&y coordinates of point A: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter the x&y coordinates of point B: ");
    scanf("%f%f", &x2, &y2);

    distance = sqrt((x2 - x1) + (y2 - y1));
    printf("Distance between point A and point B: %f\n", distance);

    return 0;
}