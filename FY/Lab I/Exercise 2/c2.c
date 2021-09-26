/*2. Write a program to accept quantity and rate for three items, compute the total sales amount,
Also compute and print the discount as follows: (amount > ____– 20% discount, amount between
___ to _____ -- 15% discount, amount between – ____ to ____ -- 8 % discount)*/
#include <stdio.h>

int main()
{
    int item_1, item_2, item_3;
    float rate_1, rate_2, rate_3, total, discount, amount;

    printf("Enter the quantity for item1, item2 and item3: ");
    scanf("%d%d%d", &item_1, &item_2, &item_3);
    printf("Enter the rate of item1, item2 and item3: ");
    scanf("%f%f%f", &rate_1, &rate_2, &rate_3);

    total = (item_1 * rate_1) + (item_2 * rate_2) + (item_3 * rate_3);

    if (total > 1000)
        discount = 0.2 * total;
    else if (total > 700 && total <= 1000)
        discount = 0.15 * total;
    else if (total > 500 && total <= 700)
        discount = 0.08 * total;
    else
        discount = 0;

    amount = total - discount;
    printf("Total----Discount----Amount\n");
    printf("%.2f    %.2f    %.2f\n",total,discount,amount);
    return 0;
}