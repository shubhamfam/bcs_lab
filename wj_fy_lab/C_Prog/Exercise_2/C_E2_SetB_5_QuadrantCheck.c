#include<stdio.h>

int main(){
    float x, y;
    printf("Enter coordinates\n");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0){
        printf("Point lies is Quadrant I\n");
    } else if (x < 0 && y > 0){
        printf("Point lies is Quadrant II\n");
    } else if (x < 0 && y < 0){
        printf("Point lies is Quadrant III\n");
    } else if (x > 0 && y < 0){
        printf("Point lies is Quadrant IV\n");
    } else {
        printf("Point lies on an axis.\n");
    }

}

/*
Enter coordinates
3 5
Point lies is Quadrant I

Enter coordinates
-3 5
Point lies is Quadrant II

Enter coordinates
-3 -5
Point lies is Quadrant III

Enter coordinates
3 -5
Point lies is Quadrant IV

Enter coordinates
3 0
Point lies on an axis.
*/