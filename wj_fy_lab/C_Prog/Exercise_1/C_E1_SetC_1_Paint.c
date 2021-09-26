#include<stdio.h>

int main(){
    float room_length, room_breadth, room_height, door_length, door_breadth, window_length, window_breadth;

    printf("Enter Dimensions of the room:\n");
    scanf("%f %f %f", &room_length, &room_breadth, &room_height);

    printf("\nEnter Dimensions of the door:\n");
    scanf("%f %f", &door_length, &door_breadth);

    printf("\nEnter Dimensions of the window:\n");
    scanf("%f %f", &window_length, &window_breadth);  

    float walls_area, roof_area;

    walls_area = (2*((room_length*room_height) + (room_height*room_breadth))) - (window_breadth*window_length) - (door_breadth*door_length);
    roof_area = room_breadth*room_length;

    printf("\nArea to be painted (interior walls) = %.2f\nArea to be whitewashed (roof) = %.2f\n", walls_area, roof_area);
}

/*
Enter Dimensions of the room:
20 30 10

Enter Dimensions of the door:
3 6

Enter Dimensions of the window:
1.5 3

Area to be painted (interior walls) = 977.50
Area to be whitewashed (roof) = 600.00
*/

