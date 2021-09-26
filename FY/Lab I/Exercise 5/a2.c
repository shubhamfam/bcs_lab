/*2. Write a program to display multiplication tables from ___ to ___ having n multiples each. The
output should be displayed in a tabular format. For example, the multiplication tables of 2 to 9
having 10 multiples each is shown below.*/

#include <stdio.h>
int main()
{
    int from, to, multiples;

    printf("Enter from, to & multiple: ");
    scanf("%d%d%d", &from,&to,&multiples);

    for (int i = 1; i <= multiples; i++)
    {
        for (int j = from; j <= to; j++)
        {
            printf("%d X %d = %d\t", j, i, i * j);
        }printf("\n");
    }

    return 0;
}