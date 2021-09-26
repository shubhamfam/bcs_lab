#include<stdio.h>

int main(){
        float s1, s2, s3;

        printf("Enter three sides of a triangle:\n");
        scanf("%f %f %f", &s1, &s2, &s3);

        if ((s1+s2) > s3) {
            printf("valid triangle");
        } else {
            printf("invalid triangle");
        }

        return 0;
}

/*
Enter three sides of a triangle:
3 4 5
valid triangle

Enter three sides of a triangle:
1 1 3
invalid triangle
*/