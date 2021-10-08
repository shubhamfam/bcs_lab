#include<stdio.h>


int main(){

    int n, i, j;
    double x, poly_sum=0, a, power=1;

    printf("\nEnter n:\n");
    scanf("%d",&n);

    printf("\nEnter x:\n");
    scanf("%lf",&x);

    for(i=0;i<n;i++){
        printf("\nEnter a%d:\n",i);
        scanf("%lf", &a);

        if(i==0){
            power = 1;
        }

        for(j=1;j<=i;j++){
            power*=x;
        }

        poly_sum += (a*power);
    }

    printf("\nSum of the polynomial is = %lf", poly_sum);


    return 0;
}