/*1. Write a program to accept three integers as command line arguments and find the minimum,
maximum and average of the three. Display error message if invalid number of arguments are
entered.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, int **argv)
{
    int min = atoi(argv[1]), max = 0, sum;
    float avg;

    if (argc < 4)
    {
        printf("Error: Invalid number of arguments\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);

        if (num < min)
            min = num;
        else if (num > max)
            max = num;

        sum += num;
    }

    avg = sum / 3.0;
    printf("Min = %d, Max = %d, Average: %f\n", min, max, avg);
}