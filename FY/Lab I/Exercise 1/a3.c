/* 3.  Accept  initial  velocity  (u),  acceleration  (a)  and  time  (t).  
Print  the  final  velocity  (v)  and  the distance (s) travelled. 
(Hint: v = u + at, s = u + at2) */

#include <stdio.h>

int main()
{
    int time;
    float init_velocity, acceleration, fin_velocity, distance;

    printf("Initial Velocity (m/s): ");
    scanf("%f", &init_velocity);
    printf("Acceleration (m/s2): ");
    scanf("%f", &acceleration);
    printf("Time (seconds)): ");
    scanf("%d", &time);

    fin_velocity = init_velocity + acceleration * time;
    distance = init_velocity + acceleration * time * time;

    printf("\nFinal Velocity: %f m/s", fin_velocity);
    printf("\nDistance: %f m\n", distance);

    return 0;
}