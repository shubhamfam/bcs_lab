#include<stdio.h>

void displaybits(unsigned int n) { 
    unsigned int mask = 32768; 
    /*set MSB of mask to 1 */ 
    while (mask>0){ 
        if((n&mask)==0) 
            printf("0"); 
        else 
            printf("1"); 
        mask = mask >>1; /* shift mask right */ 
    }
}


int main(){
    int x, y, res;

    printf("Enter num1:\n");
    scanf("%d", &x);
    displaybits(x);

    printf("\nEnter num2:\n");
    scanf("%d", &y);
    displaybits(y);

    res=x<<y;
    printf("\nx << y : ");
    displaybits(res);

    res=x>>y;
    printf("\nx >> y : ");
    displaybits(res);
    printf("\n");

    return 0;
}