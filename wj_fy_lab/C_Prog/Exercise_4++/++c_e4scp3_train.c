#include<stdio.h>
#define CURRENT_HOUR 4.0
#define END_HOUR 13.0
#define HALT_DURATION 10
#define SPEED 80

int main(){
    float hours, time_passed;
    int disp_hh=4, disp_mm=0;
    int halts=0, station=0;

    time_passed = CURRENT_HOUR;
    while(time_passed<END_HOUR){
        time_passed+=0.5;
        disp_mm=(disp_mm+30)%60;
        disp_hh+=(disp_mm+30)/60;
        printf("\nArrived at Station A.%d at %d:%d\n", ++station, disp_hh, disp_mm);
        halts++;
        time_passed+=(10/60);
        
        disp_hh=(disp_mm+10)/60;
        disp_mm+=(disp_mm+10)%60;

        printf("\nDeparted from Station A.%d at %d:%d\n\n", station, disp_hh, disp_mm);
    }

    hours=(END_HOUR-CURRENT_HOUR)-(halts*(10/60));

    float distance;
    distance = SPEED * hours;
    printf("\nDistance = %f\n",distance);

    return 0;
}