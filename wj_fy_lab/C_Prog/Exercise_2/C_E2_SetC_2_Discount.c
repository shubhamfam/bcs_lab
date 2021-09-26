#include<stdio.h>

int main(){
    float rate1, rate2, rate3, total, discount;
    int qty1, qty2, qty3;

    printf("Enter Rate and Qty of Item 1\n");
    scanf("%f %d", &rate1, &qty1);

    printf("\nEnter Rate and Qty of Item 2\n");
    scanf("%f %d", &rate2, &qty2);

    printf("\nEnter Rate and Qty of Item 3\n");
    scanf("%f %d", &rate3, &qty3);

    total = (rate1*qty1) + (rate2*qty2) + (rate3*qty3);
    printf("Total : %.2f", total);

    if(total>10000){
        discount = total * 0.2;
        printf("| Discount : %.2f\nTotal After Discount : %.2f\n", discount, (total-discount));
    } else if(total>3000 && total <=10000){
        discount = total * 0.15;
        printf("| Discount : %.2f\nTotal After Discount : %.2f\n", discount, (total-discount));
    } else if(total<=3000){
        discount = total * 0.08;
        printf("| Discount : %.2f\nTotal After Discount : %.2f\n", discount, (total-discount));
    }
}

/*
Enter Rate and Qty of Item 1
5 5

Enter Rate and Qty of Item 2
6 5

Enter Rate and Qty of Item 3
7 6
Total : 97.00| Discount : 7.76
Total After Discount : 89.24

Enter Rate and Qty of Item 1
100 100

Enter Rate and Qty of Item 2
324 40

Enter Rate and Qty of Item 3
34 50
Total : 24660.00| Discount : 4932.00
Total After Discount : 19728.00

Enter Rate and Qty of Item 1
20 20

Enter Rate and Qty of Item 2
50 50

Enter Rate and Qty of Item 3
20 10
Total : 3100.00| Discount : 465.00
Total After Discount : 2635.00
*/