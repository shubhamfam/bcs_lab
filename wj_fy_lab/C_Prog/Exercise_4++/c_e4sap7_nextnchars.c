#include<stdio.h>

int main(){
    char ch;
    int n;

    printf("Enter a character:\n");
    scanf("%c",&ch);

    printf("\nEnter n:\n");
    scanf("%d",&n);

    int i;
    for(i=1;i<=n;i++){
        printf("%c ",++ch);
    }

    printf("\n");

    return 0;
}