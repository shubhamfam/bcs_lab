#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;
    int word_count=0, line_count=0, char_count=0;

    fp=fopen(argv[1],"r");
    if(fp==NULL){
        printf("\nError opening file 1");
        return 0;
    }

    ch=fgetc(fp);
    while(ch != EOF){
        if(ch==' ' || ch=='\n'){
            word_count++;
        }

        if(ch=='\n'){
            line_count++;
        }

        char_count++;

        ch = fgetc(fp);
    }

    line_count++;
    word_count++;
    

    printf("\n%d lines\n%d words\n%d characters\n\n",line_count,word_count,char_count);

    fclose(fp);
}