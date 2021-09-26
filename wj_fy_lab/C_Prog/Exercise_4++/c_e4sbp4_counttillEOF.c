#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    int alph_count=0, dig_count=0;

    printf("Enter characters, ctrl+d to stop;\n");
    while((ch=getchar())!=EOF){
        if(isalpha(ch)){
            alph_count++;
        }
        if(isdigit(ch)){
            dig_count++;
        }
    }

    printf("\n%d alphabets and %d digits were entered by the user.\n",alph_count,dig_count);
    return 0;
}