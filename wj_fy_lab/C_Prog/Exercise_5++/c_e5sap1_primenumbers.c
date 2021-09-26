#include<stdio.h>

int main(){
    int n1,n2,i,j,flag=1;
    
    printf("Enter n1:\n");
    scanf("%d", &n1);

    printf("\nEnter n2:\n");
    scanf("%d", &n2);

    printf("\n");
    for(i=n1;i<=n2;i++){
        if(i<2){
            flag=0;
        } else if(i==2){
            flag=1;
        } else {
            for(j=2;j<i;j++){
                if(i%j==0){
                    flag=0;
                }
            }
        }

        if(flag){
            printf("%d ",i);
        }
    }
    printf("\n");
}