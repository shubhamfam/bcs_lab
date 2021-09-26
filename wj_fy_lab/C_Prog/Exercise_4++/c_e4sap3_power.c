#include<stdio.h>

int main(){
    int x, n, i, power=1;

    printf("Enter x and n\n");
    scanf("%d %d", &x, &n);

    for(i=1;i<=n;i++){
        power = power*x;
    }
    printf("x^n = %d\n",power);

    return 0;
}