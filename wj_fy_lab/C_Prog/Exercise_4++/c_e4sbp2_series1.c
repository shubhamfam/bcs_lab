#include<stdio.h>

int main(){
    float x, sum=0;
    int n, coeff=1;

    printf("Enter real number x and n:\n");
    scanf("%f %d",&x,&n);

    int i;
    for(i=1;i<=n;i++){
        sum+=coeff*x;
        coeff+=2;
    }

    printf("\nSum of the series = %.3f\n",sum);

    return 0;
}