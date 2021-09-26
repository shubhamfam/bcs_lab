#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n);
int exists(int key, int n, int array[MAX]);
void display(int array[MAX], int n);

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}

int exists(int key, int n, int array[MAX]){
    int i;
    for(i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return 0;
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
    int array[MAX];
    int i, n, count=0, n2;

    printf("Enter n:\n");
    scanf("%d",&n);
    n2=n;

    accept(array,n);
    display(array,n);
    for(i=0;i<n;i++)
        if(exists(array[i],n,array) != i){
            array[i]=array[i+1];
            count++;
            n2--;
        }
    //n=n2;
    display(array,n);

    return 0;
}