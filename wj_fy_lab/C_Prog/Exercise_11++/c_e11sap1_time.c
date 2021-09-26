#include<stdio.h>

void incr(int *hh, int *mm, int *ss, int *s){
    if(*ss+*s>60){
        while(*mm>59){
            
        }
    }
}

int main(){
    int hh, mm, ss, s;
    
    printf("Enter time in hh mm ss\nEnter s to increment:\n");
    scanf("%d %d %d %d", &hh,&mm,&ss,&s);
    
    incr(&hh, &mm, &ss, &s);
    return 0;
}