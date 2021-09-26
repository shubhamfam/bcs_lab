#include<stdio.h>

int main(){
    int n, reverse=0;

    printf("Enter n:\n");
    scanf("%d", &n);
    
    int num=n;
    while(n!=0){
        reverse = reverse*10 + (n%10);
        n/=10;
    }

    if(num==reverse){
        printf("\nEntered number is a palindrome.\n");
    } else {
        printf("\nEntered number is not a palindrome.\n");
    }

    printf("Reverse = %d\n", reverse);
}