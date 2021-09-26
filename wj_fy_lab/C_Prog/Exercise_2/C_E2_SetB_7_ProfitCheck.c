#include<stdio.h>

int main(){
    float cp, sp;

    printf("Enter Cost Price and Selling Price:\n");
    scanf("%f %f", &cp, &sp);

    if(cp>sp){
        printf("Seller has incurred a loss of %.2f\n", (cp-sp));
    } else if (sp>cp){
        printf("Seller has earned a profit of %.2f\n", (sp-cp));
    } else {
        printf("Seller has made neither profit nor loss.\n");
    }

    return 0;
}

/*
Enter Cost Price and Selling Price:
1000 700
Seller has incurred a loss of 300.00

Enter Cost Price and Selling Price:
1000 3000
Seller has earned a profit of 2000.00

Enter Cost Price and Selling Price:
1000 1000
Seller has made neither profit nor loss.
*/