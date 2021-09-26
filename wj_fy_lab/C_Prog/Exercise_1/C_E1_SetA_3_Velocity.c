#include<stdio.h>

int main(){

    float u, a, t, v, s;

    printf("Enter u, a and t :\n");
    scanf("%f %f %f", &u, &a, &t);

    v = u + (a*t);
    s = u + (a*t*t);

    printf("\nv = %.2fF", v);
    printf("\ns = %.2fF", s);
    

    return 0;
}

/*
Enter u, a and t :
2.2 3.4 5

v = 19.20F
s = 87.20F
*/