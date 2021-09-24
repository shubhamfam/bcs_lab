/* 1.  Consider  a  room  having  one  door  and  two  windows  both  of  
the  same  size.  Accept dimensions of the room, door and window. 
Print the area to be painted (interior walls) and area to be whitewashed (roof).*/
#include <stdio.h>

int main()
{
    float r_length, r_width, r_height, d_length, d_height, w_length, w_height, walls_area, paint_area, roof_area;

    printf("Dimensions of the room(length,width,height): ");
    scanf("%f%f%f", &r_length, &r_width, &r_height);

    printf("Dimensions of the door(length,height): ");
    scanf("%f%f", &d_length, &d_height);

    printf("Dimensions of the window(length,height): ");
    scanf("%f%f", &w_length, &w_height);

    paint_area = 4 * r_length * r_height - d_length * d_height - 2 * w_length * w_height;
    roof_area = r_length * r_width;

    printf("Area to be painted (interior walls): %f\n", paint_area);
    printf("Area to be whitewashed             : %f\n", roof_area);
    return 0;
}