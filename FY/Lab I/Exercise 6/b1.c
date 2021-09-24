/*1. Accept x and y coordinates of two points and write a menu driven program to perform the
following operations till the user selects Exit.
i. Distance between points.
ii. Slope of line between the points.
iii. Check whether they lie in the same quadrant.
iv. EXIT
(Hint: Use formula m = (y2-y1)/(x2-x1) to calculate slope of line.)*/
#include <stdio.h>
#include <math.h>

int getQuadrant(float x, float y)
{
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    else
        return 0;
}

int main()
{
    float x1, y1, x2, y2, distance, slope;
    int o;

    printf("Enter coordinates of 1st point: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinates of 2nd point: ");
    scanf("%f%f", &x2, &y2);

    do
    {
        printf("1.Distance between points\n2,Slope of line between the points\n3.Check whether they lie in the same quadrant\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            distance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
            printf("Distance between (%f,%f) & (%f,%f) is: %f\n", x1, y1, x2, y2, distance);
            break;
        case 2:
            slope = (y2 - y1) / (x2 - x1);
            printf("Slope of line between (%f,%f) & (%f,%f) is: %f\n", x1, y1, x2, y2, slope);
            break;
        case 3:
            if (getQuadrant(x1, y1) == getQuadrant(x2, y2))
                printf("Points (%f,%f) & (%f,%f) lie in the same %dth quadrant\n", x1, y1, x2, y2, getQuadrant(x1, y1));
            break;
        default:
            break;
        }

    } while (o != 0);

    return 0;
}