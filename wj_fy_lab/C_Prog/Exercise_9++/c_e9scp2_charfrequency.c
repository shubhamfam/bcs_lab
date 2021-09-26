#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 50

void accept(char string[MAX]){
    fgets(string,MAX,stdin);
}

void count_frequency(char string[MAX]){
    int freq[25] = {0};
    int i, ot_alph=0; //65-90

    int n=strlen(string);
    
    for(i=0;i<n;i++){
        if(isalpha(string[i])){
            if(isupper(string[i])){
            }
            if(islower(string[i])){
                string[i]=toupper(string[i]);
            }
        }
    }

    for(i=0;i<n;i++){
        // if(array[i] == i){
            if(string[i]>90 || string[i]<65){
                ot_alph++;
            } else {
                freq[string[i]-65]++;
            }
        // }
    }

    for(i=0;i<25;i++){
        if(freq[i]==0){
            continue;
        }
        printf("\nFrequency of %c : %d", i+65, freq[i]);
    }
    // if(ot_alph){
    //     printf("\nFrequency of other characters: %d", ot_alph);
    // }
}

int main(){
    char string[MAX];
    int n;

    // printf("Enter n:\n");
    // scanf("%d",&n);
    accept(string);
    count_frequency(string);

    return 0;
}