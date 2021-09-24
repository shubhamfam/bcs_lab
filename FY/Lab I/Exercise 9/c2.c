/*Write a program to accept characters from the user till the user enters EOF and calculate the
frequency count of every alphabet. Display the alphabets and their count.
Input: THIS IS A SAMPLE INPUT
Output: Character Count
            T       2
            H       1
            ..      ..
*/
#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

int stringHas(char *str, char ch)
{
    while (*str)
    {
        if (*str == ch)
            return 1;
        *str++;
    }
    return 0;
}

int countOccurrences(char *str, char ch)
{
    int count = 0;
    while (*str)
    {
        if (*str == ch)
            count++;
        *str++;
    }
    return count;
}

int main()
{
    char *str, *countedQueue;
    int i = 0, count;

    str = (char *)malloc(sizeof(char));
    countedQueue = (char *)malloc(sizeof(char));

    scanf("%[^\n]s", str);
    printf("%s", str);

    while (*str)
    {
        if (!stringHas(countedQueue, *str))
        {
            count = countOccurrences(str, *str);
            printf("\n%c\t%d", *str, count);
            countedQueue[i] = *str;
            i++;
        }
        *str++;
    }

    return 0;
}