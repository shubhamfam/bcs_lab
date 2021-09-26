#include<stdio.h>

int main(){
    int n,i,j;
    char ch=65;

    printf("Enter n:\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c\t",ch++);
        }
        printf("\n");
    }
    return 0;
}