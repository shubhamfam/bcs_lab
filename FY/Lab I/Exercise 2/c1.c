/*1. Write a program to accept marks for three subjects and find the total marks secured ,
average and also display the class obtained. (Class I – above __%, class II – ___% to ___%,
pass class – ___% to ___% and fail otherwise)*/

#include <stdio.h>

int main()
{
    int m, n, o, total;
    float percentage;

    printf("Enter marks of 3 subjects(out of 100): ");
    scanf("%d%d%d", &m, &n, &o);

    total = m + n + o;
    percentage = total / 3;

    printf("Total Marks: %d Percentages: %.2f\n", total, percentage);
    if (percentage > 70)
        printf("First class with Distinction\n");
    else if (percentage <= 70 && percentage > 60)
        printf("First Class\n");
    else if (percentage <= 60 && percentage > 50)
        printf("Second Class\n");
    else if (percentage <= 50 && percentage > 35)
        printf("Third Class\n");
    else
        printf("Fail\n");
    return 0;
}