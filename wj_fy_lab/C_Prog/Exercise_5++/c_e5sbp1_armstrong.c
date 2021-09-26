#include<stdio.h>

int main(){
    int n, rem, num, reverse, cube, sum;

    for(n=1;n<=500;n++){
        reverse=0, cube=1, sum=0;
        num=n;

        while(num!=0){
            rem = num%10;
            cube = rem*rem*rem;
            sum += cube;
            reverse = reverse*10 + (rem);
            num/=10;
        }

        if(sum==n){
            printf("%d\n",n);
        }
    }

    return 0;
}