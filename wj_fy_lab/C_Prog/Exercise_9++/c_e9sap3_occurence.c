#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
}

int count(int array[MAX], int n, int key){
    int i,count=0;
    for(i=0;i<n;i++){
        if(array[i]==key){
            count++;
        }
    }
    return count;
}

int main(){
    int array[MAX]={0};
    int n,integer,c=0;

    printf("Enter n:\n");
    scanf("%d",&n);

    accept(array,n);

    printf("Enter an integer:\n");
    scanf("%d",&integer); 

    c=count(array,n,integer);

    printf("\n%d occurs %d times.", integer, c);

    return 0;
}