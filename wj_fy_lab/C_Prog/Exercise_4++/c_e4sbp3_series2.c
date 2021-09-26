#include<stdio.h>

int main(){
    float x, sum=0,pow_x=1;
    int n;  

    printf("Enter real number x and n:\n");
    scanf("%f %d",&x,&n);

    int i,j;    //loop counters

    for(i=1;i<=n;i++){
        pow_x=pow_x*x;
        sum += i/pow_x;
    }

    printf("\nSum of the series = %.3f\n",sum);

    return 0;
}