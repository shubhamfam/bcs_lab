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
    int n1, n2, res;

    printf("Enter num1:\n");
    scanf("%d", &n1);
    displaybits(n1);
    printf("Enter num2:\n");
    scanf("%d", &n2);
    displaybits(n2);

    res=n1&n2;
    printf("\nn1 AND n2: "); displaybits(res);

    res=n1|n2;
    printf("\nn1 OR n2: "); displaybits(res);

    res=n1^n2;
    printf("\nn1 XOR n2: "); displaybits(res);

    res=~n1;
    printf("\nn1 AND n2: "); displaybits(res);

    res=~n1;
    printf("\nn1 1's complement: "); displaybits(res);

    res=~n2;
    printf("\nn2 1's complement: "); displaybits(res);

    return 0;
}