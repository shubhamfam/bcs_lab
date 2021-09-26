#include<stdio.h>

int main(){
    double salary, itax;

    printf("Enter Salary:\n");
    scanf("%lf", &salary);

    if (salary < 150000) {
        printf("Salary: %lf\nNo Income tax.\n", salary);
    } else if (salary >= 150000 && salary <= 300000) {
        itax = salary * 0.2;
        printf("Salary: %lf\nIncome Tax: %lf", salary, itax);
    } else if (salary > 300000) {
        itax = salary * 0.3;
        printf("Salary: %lf\nIncome Tax: %lf", salary, itax);
    }
    
    return 0;
}

/*
Enter Salary:
450000
Salary: 450000.000000
Income Tax: 135000.000000

Enter Salary:
140000
Salary: 140000.000000
No Income tax.

Enter Salary:
200000
Salary: 200000.000000
Income Tax: 40000.000000 
*/