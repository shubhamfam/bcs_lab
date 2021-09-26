#include<stdio.h>
#define MAX 50

void insertion_sort(int array[MAX], int n){
    int i, j, temp;

    for(i=1;i<n;i++){
        temp=array[i];
        j=i-1;

        while(j>=0 && array[j]>temp){
            array[j+1]=array[j];
            j--;
        }

        array[j+1] = temp;
    }
}

void display(int array[MAX], int n){
    int i;
    printf("\n");
    for (i=0; i<n; i++){
        printf("%d\t", array[i]);
    }
}

void sort_accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers\n", n);
    for(i=0;i<n;i++){
        printf("\n");
        scanf("%d",&array[i+1]);
        insertion_sort(array, i+1);
        display(array,n);
    }
}

int main(){
    int array[MAX]={0};

    int n;

    printf("Enter n:\n");
    scanf("%d",&n);
    sort_accept(array,n);

}