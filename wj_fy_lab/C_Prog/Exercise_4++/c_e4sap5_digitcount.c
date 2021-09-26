#include<stdio.h>

int main(){
    int n, count=0;

    printf("Enter n:\n");
    scanf("%d", &n);
    
    while(n){
        n/=10;
        count++;
    }

    printf("Count = %d\n", count);

    return 0;
}