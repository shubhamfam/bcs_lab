#include<stdio.h>
#include<math.h>

int main(void){
    float x1, x2, y1, y2, dist;

    printf("Enter the coordinates of P1:\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of P2:\n");
    scanf("%f %f", &x2, &y2);

    float x = (x2 - x1) * (x2 - x1);
    float y = (y2 - y1) * (y2 - y1);
    dist = sqrt(x+y);

    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f", x1,y1,x2,y2,dist);

    return 0;
}

/*
Enter the coordinates of P1:
2 4
Enter the coordinates of P2:
4 6
Distance between (2.00,4.00) and (4.00,6.00) is 2.83
*/