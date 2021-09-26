#include<stdio.h>

int main(){
    int num1, num2;
    char op;
    float division;

    printf("Enter arithmetic operation: \n");
    scanf("%d%c%d", &num1, &op, &num2);

    switch(op){
        case '+':
            printf("Addition : %d + %d = %d\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("Subtraction : %d - %d = %d\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("Multiplication : %d * %d = %d\n",num1,num2,num1*num2);
            break;
        case '/':
            
            division = (float)num1/num2;
            printf("Division : %d / %d = %.2f\n",num1,num2,division);
            break;
        default:
            printf("invalid operator\n");
    }
    
    return 0;
}

/*
Enter arithmetic operation: 
1+2
Addition : 1 + 2 = 3

Enter arithmetic operation: 
3-4
Subtraction : 3 - 4 = -1

Enter arithmetic operation: 
4*-20
Multiplication : 4 * -20 = -80

Enter arithmetic operation: 
2/8
Division : 2 / 8 = 0.25
*/