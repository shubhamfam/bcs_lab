#include<stdio.h>

int main(){
    char c;

    printf("Enter the char: \n");
    scanf("%c", &c);

    if (c>=48 && c<=57){
        printf("%c is a digit", c);
    }

    if (c>=97 && c<=122){
        printf("%c is a lowercase character", c);
    }

    if (c>=65 && c<=90){
        printf("%c is an uppercase character", c);
    }
}

/*
Enter the char: 
A
A is an uppercase character

Enter the char: 
3
3 is a digit

Enter the char: 
f
f is a lowercase character
*/