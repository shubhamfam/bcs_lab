#include<stdio.h>

int main(){
    int num, ll, ul;

    printf("Enter the numbers: \n");
    scanf("%d %d %d", &num, &ll, &ul);

    if (num>ll && num<ul){
        printf("%d lies between %d and %d\n", num, ll, ul);
    } else {
        printf("%d does not lie between %d and %d\n", num, ll, ul);
    }

    return 0;
}


/*
Enter the numbers: 
10 20 30
10 does not lie between 20 and 30

Enter the numbers: 
21 10 30
21 lies between 10 and 30
*/