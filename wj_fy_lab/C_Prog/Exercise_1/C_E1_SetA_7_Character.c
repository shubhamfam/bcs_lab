#include<stdio.h>

int main(void){

    char c;

    printf("\nEnter a character :\n");
    scanf("%c", &c);

    printf("\nPrev Char: %c \nNext Char: %c\n", c-1, c+1);

    return 0;
}

/*
Enter a character :
B

Prev Char: A 
Next Char: C
*/