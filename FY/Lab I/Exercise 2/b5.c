/*5. Accept the x and y coordinate of a point and find the quadrant in which the point lies.*/
#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter x & y coordinates of a point:  \n");
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0)
        printf("(%f,%f) lies in the 1st quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("(%f,%f) lies in the 2nd quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("(%f,%f) lies in the 3rd quadrant\n", x, y);
    else
        printf("(%f,%f) lies in the 4th quadrant\n", x, y);

    return 0;
}