#include<stdio.h>

double power(float x, float y){
    int i;
    double power=1;

    for(i=1;i<=y;i++){
        power = power*x;
    }
    
    return power;
}

int factorial(int n){
    if(n<=1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

double e_x(int n, double x){
    double e_x=0;
    int i;

    for(i=0;i<=n;i++){
        e_x += (power(x,i)/factorial(i));
    }

    return e_x;
}

int main(){
    int op,n;
    double x;
    
    printf("Enter x and n\n");
    scanf("%lf %d",&x,&n);

    do{
        printf("1. e^x\n2. sin x\n3. cos x\n0. exit");
        scanf("%d",&op);

        switch(op){
            case 1:
                printf("e^x sum val by taylor series for given x and n = %.3lf\n\n",e_x(x,n));
                break;
            case 2:
               // printf("sin x sum val by taylor series for given x and n = %.3lf\n\n",sinx(x,n));
                break;
        }
    }while(op);
}