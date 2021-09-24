/*2. Create a structure employee (id, name, salary). Accept details of n employees and write a
menu driven program to perform the following operations. Write separate functions for the
different options.
i) Search by name
ii) Search by id
iii) Display all
iv) Display all employees having salary > _____
v) Display employee having maximum salary
*/
#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};

void searchByName(struct employee e[], int n, char name[20])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, e[i].name) == 0)
        {
            printf("\n\n ID \t Name  \t Salary");
            printf("\n == == == == == == == == == == == == == == == ==\n");
            printf("\n%d\t %s\t %f", e[i].id, e[i].name, e[i].salary);
            return;
        }
    }
}

void searchByID(struct employee e[], int n, int id)
{
    for (int i = 0; i < n; i++)
    {
        if (e[i].id == id)
        {
            printf("\n\n ID \t Name  \t Salary");
            printf("\n == == == == == == == == == == == == == == == ==\n");
            printf("\n%d\t %s\t %f", e[i].id, e[i].name, e[i].salary);
            return;
        }
    }
}

void displayAll(struct employee e[], int n)
{
    printf("\n\n ID \t Name \t Salary");
    printf("\n == == == == == == == == == == == == == == == ==\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t %s\t % f", e[i].id, e[i].name, e[i].salary);
    }
}

void salaryGreater(struct employee e[], int n, float salary)
{
    for (int i = 0; i < n; i++)
        if (e[i].salary > salary)
        {
            printf("\n\n ID \t Name \t Salary");
            printf("\n == == == == == == == == == == == == == == == ==\n");
            printf("\n%d\t %s\t % f", e[i].id, e[i].name, e[i].salary);
        }
}

void maxSalary(struct employee e[], int n)
{
    int maxsalaryIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (e[i].salary > e[maxsalaryIndex].salary)
            maxsalaryIndex = i;
    }
    printf("\n\n ID \t Name \t Salary");
    printf("\n == == == == == == == == == == == == == == == ==\n");
    printf("\n%d\t %s\t % f", e[maxsalaryIndex].id, e[maxsalaryIndex].name, e[maxsalaryIndex].salary);
}

int main()
{
    int n, o, id;
    float salary;
    char name[20];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n];
    printf("\n Enter the details of the %d employees \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name and id \n");
        scanf("%s %d", e[i].name, &e[i].id);
        printf("Enter the salary \n");
        scanf("%f", &e[i].salary);
    }

    do
    {
        printf("\n1.Search by name\t2.Search by id\t3.Display all\t4.Display employees having salary >\t5.Employees with max salary\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            printf("Enter name: ");
            scanf("%s", name);
            searchByName(e, n, name);
            break;
        case 2:
            printf("Enter ID: ");
            scanf("%d", &id);
            searchByID(e, n, id);
            break;
        case 3:
            displayAll(e, n);
            break;
        case 4:
            printf("Enter salary: ");
            scanf("%f", &salary);
            salaryGreater(e, n, salary);
            break;
        case 5:
            maxSalary(e, n);
            break;
        default:
            break;
        }

    } while (o != 0);

    return 0;
}