/*1. Accept the three positive integers for date from the user (day, month and year) and check
whether the date is valid or invalid. Run your program for the following dates and fill the table.
(Hint: For valid date 1<=month<=12,1<= day <=no-of-days where no-of-days is 30 in case of
months 4, 6,9 and 11. 31 in case of months 1,3,5,7,8,10 and 12. In case of month 2 no-of-days is
28 or 29 depending on year is leap or not)*/
#include <stdio.h>
int main()
{
    int day, month, year, no_of_days = 0;
    int valid = 0;

    printf("Enter date(dd mm yyyy): ");
    scanf("%d%d%d", &day, &month, &year);

    if (day < 1 || day > 31)
    {
        printf("Invalid date\n");
        return 0;
    }

    //validity of month
    if (month >= 1 && month <= 12)
    {
        //leap year check
        if (month == 2)
        {
            if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
            {
                if (day <= 29)
                    valid = 1;
            }
            else if (day <= 28)
                valid = 1;
        }
        // 30 day month check
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day <= 30)
                valid = 1;
        }
        else
            valid = 1;
    }

    valid == 1 ? printf("Valid Date\n") : printf("Invalid Date\n");

    return 0;
}