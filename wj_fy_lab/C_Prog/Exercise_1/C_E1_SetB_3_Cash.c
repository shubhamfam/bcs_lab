#include<stdio.h>

int main(){
    int amount, den10=0, den5=0, den1=0, temp;

    printf("\nEnter Amount:\n");
    scanf("%d", &amount);

    den10 = amount / 10;
    temp = amount % 10;

    den5 = temp/5;
    temp = temp % 5;

    den1 = temp/1;

    printf("10x%d, 5x%d, 1x%d", den10, den5, den1);
    return 0;
}