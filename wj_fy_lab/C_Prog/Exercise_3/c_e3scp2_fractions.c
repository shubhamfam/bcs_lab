#include<stdio.h>

int main(){
    int num1, den1, num2, den2, op, res_num, res_den;
    num1 = num2 = op =res_num= 0;
    den1 = den2 = res_den = 1;

    printf("Enter the fractions\n");
    scanf("%d/%d %d/%d", &num1, &den1, &num2, &den2);

    if(den1==0 || den2==0){
        printf("Denominator is Zero. Cannot Compute.\n");
        return 0;
    }

    do{
        printf("1. Addition\n2. Subtraction\n3.Multiplication\n0.Exit");
        scanf("%d",&op);

        switch(op){
            case 1:
                if(den1==den2){
                    res_num = num1+num2;
                    res_den = den1;
                } else {
                    res_num = (num1*den2)+(num2*den1);
                    res_den = den1*den2;
                }
                printf("Addition = %d/%d\n\n",res_num,res_den);
                break;
            case 2:
                if(den1==den2){
                    res_num = num1-num2;
                    res_den = den1;
                } else {
                    res_num = (num1*den2)-(num2*den1);
                    res_den = den1*den2;
                }
                printf("Subtraction = %d/%d\n\n",res_num,res_den);
                break;
            case 3:
                res_num=num1*num2;
                res_den=den1*den2;
                printf("Multiplication = %d/%d\n\n",res_num, res_den);
                break;
            case 0:
                break;
            default:
                break;
        }
    }while(op);
    return 0;
}