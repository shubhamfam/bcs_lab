#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}

void bubble(int array[MAX], int n){  
    int i, j, temp;  
    for(i = 0; i < n; i++){    
        for(j = i+1; j < n; j++){    
            if(array[j] < array[i]){    
                temp = array[i];    
                array[i] = array[j];    
                array[j] = temp;     
            }     
        }     
    }     
 }  

void display(int array[MAX], int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

int main(){
    int array[MAX] = {0};
    int n;

    printf("Enter n:\n");
    scanf("%d",&n);

    accept(array,n);
    bubble(array,n);
    display(array,n);
}