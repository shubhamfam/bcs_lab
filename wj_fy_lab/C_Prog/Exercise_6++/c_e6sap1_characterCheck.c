#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter a character:\n");
    scanf("%c", &c);

    if(isalpha(c)){
        if(isupper(c)){
            printf("\ncharacter is an Uppercase alphabet.\n");
            c=tolower(c);
            printf("\n%c | converted alphabet to lowercase.\n",c);
        }
        if(islower(c)){
            printf("\ncharacter is a lowercase alphabet.\n");
            c=toupper(c);
            printf("\n%c | converted alphabet to uppercase.\n",c);
        }
    }

    if(isdigit(c)){
        printf("\ncharacter is a digit.\n");
    }

    if(ispunct(c)){
        printf("\ncharacter is a punctuation symbol.\n");
    }
}