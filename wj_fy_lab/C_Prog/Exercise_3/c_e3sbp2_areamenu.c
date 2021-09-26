#include<stdio.h>

int main(){
    float dim1,dim2,area;
    dim1=dim2=area=0.0;
    int op;

    
    do{
        printf("1. Area of Square\n2. Area of rectangle\n3. Area of Triangle");
        scanf("%d",&op);
        
        switch(op){
            case 1:
                printf("Enter SIde:\n");
                scanf("%f", &dim1);
                area=dim1*dim1;
                printf("Area of Square = %f\n", area);
                break;
            case 2:
                printf("Enter length and breadth:\n");
                scanf("%f %f", &dim1,&dim2);
                area=dim1*dim2;
                printf("Area of Rectangle = %f\n", area);
                break;
            case 3:
                printf("Enter height and base:\n");
                scanf("%f %f", &dim1, &dim2);
                area=(0.5)*dim1*dim2;
                printf("Area of Triangle = %f\n", area);
                break;
            case 0:
                break;
            default:
                break;
        }
    }while(op);
    return 0;
}