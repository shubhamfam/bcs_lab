#include<stdio.h>

int main(){
    int num1, num2, op=1, range_num=0, temp=0;

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &num1, &num2);
    
    do{
        printf("1. Equality\n2. Less Than\n3. Quotient and Remainder\n4. Range\n5. Swap\n0.Exit");
        scanf("%d", &op);

        switch(op){
            case 1:
                if (num1==num2) {
                    printf("Entered numbers are equal.\n");
                } else {
                    printf("Entered numbers are not equal\n");
                }
                break;
            case 2:
                if (num1 < num2) {
                    printf("num1 is less then num2.\n");
                } else {
                    printf("num1 is not less than num2");
                }
                break;
            case 3:
                printf("Quotient = %d\n",num1/num2);
                printf("Remainder = %d\n",num1%num2);
                break;
            case 4:
                scanf("%d",&range_num);
                if((range_num >=num1 && range_num <= num2)||(range_num <=num1 && range_num >= num2)){
                    printf("%d lies in the range of the given numbers\n",range_num);
                } else {
                    printf("%d does not lie in the range.\n", range_num);
                }
                break;
            case 5:
                temp=num1;
                num1=num2;
                num2=temp;

                printf("Swapped numbers are %d and %d\n", num1, num2);
                break;
            case 0:
                break;
            default:
                printf("Invalid input.\n");
                break;
        }
    }while(op);

    
    return 0;
}   