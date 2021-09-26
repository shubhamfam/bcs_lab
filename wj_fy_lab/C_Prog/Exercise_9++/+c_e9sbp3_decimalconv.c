#include<stdio.h>

void reverse(int array[10], int i){
    int temp[10];
    int j;

    for(j=0;j<i;j++){
        temp[j]=array[i-j];
    }

    for(j=0;j<i;j++){
        array[j]=temp[j];
    }
}

void display(int array[10], int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("\n");
}


int main(){
    int num, array[10];
    int i=0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    while(num>0){
        array[i]=num/2;
        num=num/2;
        i++;
    }

    reverse(array, i);
    display(array, i);
}