#include<stdio.h>

int main(){
    char c;

    printf("Enter the char: \n");
    scanf("%c", &c);

    if (c>=48 && c<=57){
        printf("%c is a digit", c);
    } else {
        printf("%c is not a digit", c);
    }

    return 0;
}


/*
Enter the char: 
5
5 is a digit

Enter the char: 
0
0 is a digit

Enter the char: 
9
9 is a digit

Enter the char: 
y
y is not a digit
*/