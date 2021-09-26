/*3. A library charges a fine for every book returned late. Accept the number of days the member
is late, compute and print the fine as follows:(less than five days Rs ___ fine, for 6 to 10 days Rs.
____ fine and above 10 days Rs. ___ fine )*/
#include <stdio.h>

int main()
{
    int daysPastDue, numOfBooks;
    float fine;

    printf("Number of days by which the member is late: ");
    scanf("%d", &daysPastDue);

    printf("Enter the number of books returned late: ");
    scanf("%d", &numOfBooks);

    if (daysPastDue <= 5)
        fine = numOfBooks * 2;
    else if (daysPastDue > 5 && daysPastDue <= 10)
        fine = numOfBooks * 5;
    else if (daysPastDue > 10)
        fine = numOfBooks * 7;

    printf("Total Fine: %f\n", fine);

    return 0;
}