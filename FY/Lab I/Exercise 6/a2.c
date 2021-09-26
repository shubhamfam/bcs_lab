/*2. Write a menu driven program to perform the following operations till the user selects Exit.
Accept appropriate data for each option. Use standard library functions from math.h
i. Sine ii. Cosine iii. log iv. e^x
v. Square Root vi. Exit*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ch, input;

    do
    {
        printf("1.Sine 2.Cosine 3.Log 4.e^x 5.Square root 0.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter x (sin (x)): ");
            scanf("%d", &input);
            printf("sin(%d) = %f\n", input, sin(input));
            break;
        case 2:
            printf("Enter x (cos (x)): ");
            scanf("%d", &input);
            printf("cos(%d) = %f\n", input, cos(input));
            break;
        case 3:
            printf("Enter x (log (x)): ");
            scanf("%d", &input);
            printf("log(%d) = %f\n", input, log(input));
            break;
        case 4:
            printf("Enter x (e^x): ");
            scanf("%d", &input);
            printf("e^%d = %f\n", input, exp(input));
            break;
        case 5:
            printf("Enter x : ");
            scanf("%d", &input);
            printf("sqrt(%d) = %f\n", input, sqrt(input));
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    } while (ch != 0);

    return 0;
}
