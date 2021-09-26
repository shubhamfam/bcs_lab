#include<stdio.h>

int main(void){

    char c;

    printf("\nEnter a character :\n");
    scanf("%c", &c);

    printf("\nASCII Value of %c : %d \n", c, c);

    return 0;
}

/*
Enter a character :
A

ASCII Value of A : 65 
*/