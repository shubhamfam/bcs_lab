#include<stdio.h>

int main(){
    int sub1, sub2, sub3, total;
    float pct;

    printf("Enter marks of the three subjects: \n");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    pct = (total/3.00);
    printf("%d/300 | %fpc\n", total, pct);

    if (pct >= 70) {
        printf("Class I\n");
    } else if (pct >= 55 && pct < 70) {
        printf("Class II\n");
    } else if (pct >= 40 && pct < 55 ) {
        printf("Pass Class\n");
    } else if (pct < 40) {
        printf("Failed\n");
    }

    return 0;
}

/*
Enter marks of the three subjects: 
90 90 90
270/300 | 90.000000pc
Class I

Enter marks of the three subjects: 
60 60 60
180/300 | 60.000000pc
Class II

Enter marks of the three subjects: 
45 45 45 
135/300 | 45.000000pc
Pass Class

Enter marks of the three subjects: 
20 20 12
52/300 | 17.333334pc
Failed
*/