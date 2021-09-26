/*1. Create a structure student (roll number, name, marks of 3 subjects, percentage). Accept
details of n students and write a menu driven program to perform the following operations. Write
separate functions for the different options.
i)
Search
ii)
Modify
iii)
Display all student details
iv)
Display all student having percentage > _____
v)
Display student having maximum percentage*/
#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks[3];
    float perc;
};

void display(struct student s[], int n)
{
    printf("\n\n Name \t Roll no\t Percentage");
    printf("\n == == == == == == == == == == == == == == == ==\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%s\t %d\t % f", s[i].name, s[i].rollno, s[i].perc);
    }
}

void search(struct student s[], int n, int rollno)
{
    for (int i = 0; i < n; i++)
        if (s[i].rollno == rollno)
        {
            printf("\n\n Name \t Roll no\t Percentage");
            printf("\n == == == == == == == == == == == == == == == ==\n");
            printf("\n%s\t %d\t % f", s[i].name, s[i].rollno, s[i].perc);
            break;
        }
}

void percentGreater(struct student s[], int n, float percent)
{
    for (int i = 0; i < n; i++)
        if (s[i].perc > percent)
        {
            printf("\n\n Name \t Roll no\t Percentage");
            printf("\n == == == == == == == == == == == == == == == ==\n");
            printf("\n%s\t %d\t % f", s[i].name, s[i].rollno, s[i].perc);
        }
}

void maxPercent(struct student s[], int n)
{
    int maxPercentIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].perc > s[maxPercentIndex].perc)
            maxPercentIndex = i;
    }
    printf("\n\n Name \t Roll no\t Percentage");
    printf("\n == == == == == == == == == == == == == == == ==\n");
    printf("\n%s\t %d\t % f", s[maxPercentIndex].name, s[maxPercentIndex].rollno, s[maxPercentIndex].perc);

}

int main()
{
    int sum, n, o, rollno;
    float percent;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];

    printf("\n Enter the details of the %d students \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name and roll number \n");
        scanf("%s %d", s[i].name, &s[i].rollno);
        printf("\n Enter marks for three subjects:");
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            sum = sum + s[i].marks[j];
        }
        s[i].perc = (float)sum / 3;
    }

    do
    {
        printf("\n1.Search\t2.Modify\t3.Display all\t4.Students having percetage more than\t5.Student with max percentage\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("Enter roll number of the student to be searched: ");
            scanf("%d", &rollno);
            search(s, n, rollno);
            break;
        case 3:
            display(s, n);
            break;
        case 4:
            printf("Enter percentage: ");
            scanf("%f", &percent);
            percentGreater(s, n, percent);
            break;
        case 5:
            maxPercent(s, n);
            break;
        default:
            break;
        }
    } while (o != 0);

    return 0;
}