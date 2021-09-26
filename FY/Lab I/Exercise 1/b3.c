/* 3.  A  cashier  has  currency  notes  of  denomination  1,  5  and  10.  
Accept  the  amount  to  be withdrawn  from  the  user  and 
 print  the  total  number of  currency  notes  of  each  denomination 
the cashier will have to give*/

#include <stdio.h>

int main()
{
    int amount, ones, fives, tens;

    printf("Amount to be withdrawn: ");
    scanf("%d", &amount);
    // 88/10 = 8 tens amount %= 10  8/5 = 1 five ones = amount%5
    tens = amount / 10;
    amount %= 10;
    fives = amount / 5;
    ones = amount % 5;

    printf("Notes of 10 : %d\n", tens);
    printf("Notes of 5  : %d\n", fives);
    printf("Notes of 1  : %d\n", ones);

    return 0;
}