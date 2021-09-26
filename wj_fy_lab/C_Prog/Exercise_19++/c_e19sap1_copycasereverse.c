#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
    FILE *fp, *fp2;
    char ch;
    fp=fopen(argv[1],"r");
    if(fp==NULL){
        printf("\nError opening file 1");
        return 0;
    }

    fp2=fopen(argv[2], "a+");
    if(fp2==NULL){
        printf("\nError opening file 2");
        return 0;
    }

    ch=fgetc(fp);
    while(ch != EOF){
        if(isupper(ch)){
            fputc(tolower(ch),fp2);
        } else if (islower(ch)){
            fputc(toupper(ch),fp2);
        } else {
            fputc(ch,fp2);
        }
        ch = fgetc(fp);
    }

    fclose(fp);
    fclose(fp2);
}