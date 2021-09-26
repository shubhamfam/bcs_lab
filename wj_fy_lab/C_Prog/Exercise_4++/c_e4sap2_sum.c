#include<stdio.h>

int main(){
    int x, y, i, sum=0;

    printf("Enter X and Y:\n");
    scanf("%d %d", &x, &y);

    for(i=x;i<=y;i++){
        sum+=i;
    }
    printf("Sum of integers from %d to %d = %d\n",x,y,sum);
}