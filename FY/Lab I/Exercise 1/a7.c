/*7. Accept a character from the keyboard and display its previous and next character 
in order.  Ex. If the character entered is ‘d’, 
display  “The previous character is c”, “The next character is e”. */

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("\nThe previous character is %c", ch - 1);
    printf("\nThe next character is %c\n", ch + 1);

    return 0;
}