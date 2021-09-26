#include<stdio.h>

int main(){
    int n,i,flag=1;
    
    printf("Enter n:\n");
    scanf("%d", &n);

    if(n<2){
        flag=0;
    } else if(n==2){
        flag=1;
    } else {
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=0;
            }
        }
    }

    if(flag){
        printf("is prime.\n");
    } else if(!flag){
        printf("not prime.\n");
    }

    return 0;
}