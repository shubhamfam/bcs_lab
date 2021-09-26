#include<stdio.h>
#include<string.h>
#define MAX 50

void accept(char string[MAX]){
    fgets(string,MAX,stdin);
}

char* reverse(char string[MAX]){
    char temp[MAX];
    int i,j;

    for(i=strlen(string)-1;i>=0;i--){
        for(j=0;j<strlen(string);j++){
            temp[j]=string[i];
        }
    }

    // for(j=0;j<strlen(string);j++){
    //     string[i]=temp[j];
    // }

    return string;
}

int palindrome(char string[MAX]){
    if(strcmp(string, reverse(string))==0){
        return 1;
    }
    return 0;
}

int main(){

    char string[MAX];
    accept(string);
    reverse(string);
    printf("%d",palindrome(string));
    return 0;
}