#include<stdio.h>

int main(){
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    temp=a;
    a=b;
    b=temp;

    printf("Interchange numbers are %d and %d\n", a, b);

    return 0;
}

/*
Enter two numbers:
2 3
Interchange numbers are 3 and 2
*/