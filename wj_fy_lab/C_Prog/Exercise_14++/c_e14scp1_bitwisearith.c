#include<stdio.h>

int bitwise_add(int x, int y){
    while(y!=0){
        unsigned carry = x&y;
        x=x^y;
        y=carry<<1;
    }

    return x;
}

int main(){
    int x,y,res;

    printf("Enter x and y:\n");
    scanf("%d %d",&x, &y);
    
    res=bitwise_add(x,y);
    printf("\n%d + %d = %d\n",x,y,res);
}