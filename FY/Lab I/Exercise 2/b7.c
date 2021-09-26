/*7. Accept the cost price and selling price from the keyboard. Find out if the seller has made a
profit or loss and display how much profit or loss has been made.*/
#include <stdio.h>

int main()
{
    float cost_price, sell_price;

    printf("Enter cost price and selling price : ");
    scanf("%f%f", &cost_price, &sell_price);

    if (sell_price > cost_price)
        printf("Profit of Rs.%f\n", sell_price - cost_price);
    else if (sell_price < cost_price)
        printf("Loss of Rs.%f\n", cost_price - sell_price);
    else
        printf("No profit or loss");

    return 0;
}