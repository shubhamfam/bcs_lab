#include<stdio.h>
#include<math.h>

int main(){
    int op;
    float x, res;

    do{
        printf("Select Operation:\n1. sin (x)\t2. cos (x)\t3. log (x)\t4. e^x\t5. sqrt(x)\t6. exit\n");
        scanf("%d",&op);

        switch(op){
            case 1:
                printf("\nEnter x:\n");
                scanf("%f", &x);
                res = sin(x);
                printf("sin(%f) = %f\n\n", x, res);
                break;
            case 2:
                printf("\nEnter x:\n");
                scanf("%f", &x);
                res = cos(x);
                printf("cos(%f) = %f\n\n", x, res);
                break;
            case 3:
                printf("\nEnter x:\n");
                scanf("%f", &x);
                res = log(x);
                printf("log(%f) = %f\n\n", x, res);
                break;
            case 4:
                printf("\nEnter x:\n");
                scanf("%f", &x);
                res = exp(x);
                printf("e^(%f) = %f\n\n", x, res);
                break;
            case 5:
                printf("\nEnter x:\n");
                scanf("%f", &x);
                res = sqrt(x);
                printf("sqrt(%f) = %f\n\n", x, res);
                break;
            case 6:
                break;
            default:
                break;
        }
    }while(op!=6);

    return 0;
}