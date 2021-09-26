#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);

    if(year%100==0){
        printf("Not a leap year");
    } else if (year%400 == 0){
        printf("leap year");
    } else if (year%4 == 0) {
        printf("leap year");
    } else {
        printf("not a leap year");
    }
}

/*
2000
Not a leap year

2004
leap year

1699
not a leap year
*/