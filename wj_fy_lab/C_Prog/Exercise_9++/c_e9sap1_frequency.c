#include<stdio.h>
#define MAX 50

void accept(int array[MAX], int n){
    int i;
    printf("Enter %d numbers from 1 to 25:\n", n);
    for(i=1;i<=n;i++){
        scanf("%d",&array[i]);
    }
}

void count_frequency(int array[MAX], int n){
    int freq[25] = {0};
    int i, ot1_25=0;
    for(i=1;i<=n;i++){
        // if(array[i] == i){
            if(array[i]>25 || array[i]<1){
                ot1_25++;
            } else {
                freq[array[i]]++;
            }
        // }
    }

    for(i=1;i<=25;i++){
        if(freq[i]==0){
            continue;
        }
        printf("\nFrequency of % d : %d", i, freq[i]);
    }
    if(ot1_25){
        printf("\nFrequency of numbers other than 1-25: %d", ot1_25);
    }
}

int main(){
    int array[MAX]={0};
    int n;

    printf("Enter n:\n");
    scanf("%d",&n);
    accept(array,n);
    count_frequency(array,n);

    return 0;
}