#include<stdio.h>

int main(){
    int hh, mm, ss;

    printf("Enter the time as HH MM SS: \n");
    scanf("%d %d %d", &hh, &mm, &ss);

    if (hh >=0 && hh <24 && mm >=0 && mm < 60 && ss >= 0 && ss<60){
        printf("time is valid");
    } else {
        printf("time is invalid");
    }
}

/*
Enter the time as HH MM SS: 
04 55 33
time is valid

Enter the time as HH MM SS: 
23 78 43
time is invalid
*/