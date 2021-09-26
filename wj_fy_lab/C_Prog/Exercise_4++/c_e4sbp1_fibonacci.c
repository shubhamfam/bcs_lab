#include<stdio.h>

int main(){
    int a=1,b=1,n,temp;

    printf("Enter n:\n");
    scanf("%d", &n);

    int i;

    if(n==0){}
    else if(n==1){
        printf("%d\t", a);
    } else if (n==2){
        printf("%d\t%d\t",a,b);
    } else {
        printf("%d\t%d\t",a,b);
        for(i=2;i<n;i++){
            temp = b;
            b = a+b;
            a=temp;

            printf("%d\t",b);
        }
    }
    printf("\n");
    return 0;
}