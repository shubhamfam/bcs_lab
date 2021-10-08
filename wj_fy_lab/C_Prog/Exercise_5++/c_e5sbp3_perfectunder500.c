#include<stdio.h>

int main(){
    int rem, num, i, sum;

    for(num=1;num<=500;num++){
        sum=0;
        for(i=1;i<num;i++){
            if((num%i)==0){
                sum=sum+i;
            }
        }

        if(sum==num){
            printf("%d\n",num);
        }
    }

    return 0;
}