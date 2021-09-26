#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 50

void accept(char string[MAX]){
    fgets(string,MAX,stdin);
}

void display(char string[MAX]){
    printf("%s",string);
}
void replace(char string[MAX]){
    int i;
    int n=strlen(string);

    for(i=0;i<n;i++){
        if(isalpha(string[i])){
            if(isupper(string[i])){
                string[i]=tolower(string[i]);
            }
            if(islower(string[i])){
                string[i]=toupper(string[i]);
            }
        }

        if(isdigit(string[i])){
            string[i]='?';
        }

        if(string[i]==' '){
            string[i]='*';
        }
    }
}

int main(){
    char string[MAX];
    int n;

    // printf("Enter n:\n");
    // scanf("%d",&n);
    accept(string);
    replace(string);
    display(string);
    return 0;
}