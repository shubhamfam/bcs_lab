#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    if(n==0) {
        printf("%d is neither even nor odd\n", n);
    } else if(n%2==0){
        printf("%d is even\n", n);
    } else {
        printf("%d is odd", n);
    }

    return 0;
}

/*
0
0 is neither even nor odd

1
1 is odd

2
2 is even
*/