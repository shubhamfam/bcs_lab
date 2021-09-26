#include<stdio.h>

int main(){
    int start, end, n, i, j;

    printf("Enter n1, n2 and n:\n");
    scanf("%d %d %d",&start,&end,&n);

    for(i=1; i<=n; i++){
        for(j=start;j<=end;j++){
            printf("%d x %d = %d\t",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}