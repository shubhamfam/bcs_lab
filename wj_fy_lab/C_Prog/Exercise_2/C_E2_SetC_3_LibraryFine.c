#include<stdio.h>

int main(){
    int days;

    printf("Enter number of days\n");
    scanf("%d", &days);

    if (days <= 5){
        printf("Fine of Rs 10");
    } else if (days > 5 && days <= 10){
        printf("Fine of Rs 20");
    } else if (days > 10){
        printf("Fine of Rs 40");
    }
}

/*
Enter number of days
2
Fine of Rs 10

Enter number of days
7
Fine of Rs 20

Enter number of days
23
Fine of Rs 40
*/