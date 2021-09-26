#include<stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if (num%5==0 && num%7==0){
        printf("%d is divisible by 5 and 7", num);
    } else {
        printf("%d is not divisible by 5 and 7", num);
    }

    return 0;
}

/*
45
45 is not divisible by 5 and 7

35
35 is divisible by 5 and 7
*/