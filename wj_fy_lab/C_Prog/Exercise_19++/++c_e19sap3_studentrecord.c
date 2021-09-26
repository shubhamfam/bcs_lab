#include<stdio.h>
#include<string.h>

#define MAX 50  

int main(){
    FILE *fp;
    fp = fopen("students.txt","w+");

    char students[MAX];
    char string[MAX];
    char roll[4];
    int n, i=0;;

    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter Student Records (csv):\n");

    for (i=0;i<=n;i++){
        fgets(students,MAX,stdin);
        fprintf(fp,"%s",students);
    }
    
    printf("Enter Roll No to search:\n");
    fgets(roll,3,stdin);

    strcat(roll,",");

    while (fscanf(fp,"%s",string)==1){
        if(strstr(string, roll)!=0){
            puts(string);
        }
    }

    fclose(fp);
    return 0;
}