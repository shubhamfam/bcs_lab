#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n);
void display(int array[MAX], int n);
void array_copy(int array1[MAX], int array2[MAX], int index, int n);
int exists(int key, int n, int array[MAX]);
void sort(int array[MAX], int n);
void array_union(int array1[MAX], int n1, int array2[MAX], int n2);

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
     display(array,n);
}

void display(int array[MAX], int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void array_copy(int array1[MAX], int array2[MAX], int index, int n){
    int j;
    for(j=index;j<n;j++){
        array1[j]=array2[j];
    }
//    display(array1,j);
}

int exists(int key, int n, int array[MAX]){
    int i;
    for(i=0;i<n;i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}

void sort(int array[MAX], int n){  
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


void array_union(int array1[MAX], int n1, int array2[MAX], int n2){
    int i, j, union_arr[MAX];

    array_copy(union_arr, array1, 0, n1);
    //array_copy(union_arr, array2, n1, n2);
    printf("%d\t",n1);
    j=n1;
    for(i=n1;i<n1+n2;i++){
        if(exists(array2[i],n1,array1)){
            continue;
        }
        printf("%d",union_arr[j]=array2[i]);
        j++;
        printf("%d\t",j);
    }
    display(union_arr,j);
    sort(union_arr, j);
    display(union_arr,j);
}

int main(){
    int array1[MAX], array2[MAX], n1, n2;
    
    printf("Enter n for set a: \n");
    scanf("%d",&n1);
    printf("Enter n for set b: \n");
    scanf("%d",&n2);

    accept(array1,n1);
    accept(array2,n2);

    array_union(array1, n1, array2, n2);

    return 0;
}