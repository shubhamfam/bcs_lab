/*1. Write a function which takes hours, minutes and seconds as parameters and an integer s
and increments the time by s seconds. Accept time and seconds in main and Display the new
time in main using the above function.*/
#include <stdio.h>

void incrementTime(int *hr, int *min, int *sec, int s)
{
    int inc = s + *sec;
    if (inc > 59)
    {
        *sec = inc % 60;
        *min += inc / 60;
        if (*min > 59)
        {
            *min %= 60;
            *hr += 1;
        }
    }
    else
        *sec = inc;
}

int main()
{
    int hours, minutes, seconds, s;

    printf("Enter time (hr min sec): ");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    printf("Enter seconds to increment time: ");
    scanf("%d", &s);

    incrementTime(&hours, &minutes, &seconds, s);
    printf("\nincremented time: %d %d %d", hours, minutes, seconds);

    return 0;
}