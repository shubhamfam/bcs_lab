#include<stdio.h>

int main(){
    char c;
    printf("Enter Character\n");
    scanf("%c",&c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is not a vowel.\n", c);
    }
}

/*
Enter Character
A
A is a vowel.

Enter Character
a
a is a vowel.

Enter Character
b
b is not a vowel.
*/