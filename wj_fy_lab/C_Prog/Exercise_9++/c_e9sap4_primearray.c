#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
    printf("\n\n");
}

void display(int arr[MAX], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int isPrime(int n){
    int i,flag=1;
    
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

    return flag;
}

void primeArray(int array[MAX], int n){
    int i,j=0;
    int prime[MAX]={0};

    for(i=0;i<n;i++){
        if(isPrime(array[i])){
            prime[j]=array[i];
            j++;
        }
    }

    display(prime,j);
}

int main(){
    int array[MAX]={0};
    int n,integer;

    printf("Enter n:\n");
    scanf("%d",&n);
    printf("\n\n");

    accept(array,n);
    primeArray(array,n);
    
    printf("\n\n");
    return 0;
}