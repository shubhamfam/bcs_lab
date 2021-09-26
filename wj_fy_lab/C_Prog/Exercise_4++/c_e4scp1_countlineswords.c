#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    int word_count=0, line_count=0;

    printf("Enter characters, * to stop;\n");
    while((ch=getchar())!='*'){
        if(ch==' ' || ch=='\n'){
            word_count++;
        }

        if(ch=='\n'){
            line_count++;
        }

    }

    printf("\n%d words and %d lines were entered by the user.\n",word_count,line_count);
    return 0;
}