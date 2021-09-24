/*3. Accept two complex numbers from the user (real part, imaginary part). Write a menu driven
program to perform the following operations till the user selects Exit.
i. ADD
ii. SUBTRACT
iii. MULTIPLY
iv. EXIT*/
#include <stdio.h>

int main()
{
    int real_1, imag_1, real_2, imag_2, o, real, imag;

    printf("Enter two complex numbers: \n");
    printf("Enter real and imaginary part of 1st number: \n");
    scanf("%d%d", &real_1, &imag_1);
    printf("Enter real and imaginary part of 2nd number: \n");
    scanf("%d%d", &real_2, &imag_2);

    do
    {
        printf("1.Add 2.Subtract 3.Multiply 0.Exit\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            real = real_1 + real_2;
            imag = imag_1 + imag_2;
            printf("(%d+(%d)i) + (%d+(%d)i) = %d+(%d)i\n", real_1, imag_1, real_2, imag_2, real, imag);
            break;
        case 2:
            real = real_1 - real_2;
            imag = imag_1 - imag_2;
            printf("(%d+(%d)i) - (%d+(%d)i) = %d+(%d)i\n", real_1, imag_1, real_2, imag_2, real, imag);
            break;
        case 3:
            real = (real_1 * real_2) + (imag_1 * imag_2 - 1);
            imag = (real_1 * imag_2) + (real_2 * imag_1);
            printf("(%d+(%d)i) * (%d+(%d)i) = %d+(%d)i\n", real_1, imag_1, real_2, imag_2, real, imag);

            break;

        default:
            break;
        }
    } while (o != 0);

    return 0;
}