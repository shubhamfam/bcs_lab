#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
}

int linear_search(int array[MAX], int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int array[MAX]={0};
    int n,key,pos;

    printf("Enter n:\n");
    scanf("%d",&n);

    accept(array,n);

    printf("Enter key to find:\n");
    scanf("%d",&key); 

    pos=linear_search(array,n,key);

    if(pos<0){
        printf("\nkey not found");
    } else {
        printf("\n%d found at position %d\n", key, pos);
    }

    return 0;
}