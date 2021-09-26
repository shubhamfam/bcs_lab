#include<stdio.h>

int main(){
    int n, i;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i=2; i<=n; i+=2){
        printf("%d\t",i);
    }

    return 0;
}