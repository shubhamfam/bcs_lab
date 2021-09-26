#include<stdio.h>

int main(){
    int n1, n2;

    printf("Enter n1 and n2:\n");
    scanf("%d %d", &n1, &n2);

    printf("\n%d\t%d\n", n1, n2);
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
    printf("\n%d\t%d\n", n1, n2);
}