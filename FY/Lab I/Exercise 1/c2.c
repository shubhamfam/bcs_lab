/*  2.  The  basic  salary  of  an  employee  is  decided  at  the  time  of
  employment,  which  may  be different  for  different  employees.  Apart  from  
  basic,  employee  gets  10%  of  basic  as  house  rent, 30%  of basic as  dearness  
  allowance.  A  professional tax of 5% of basic is deducted from salary. 
  Accept the employee id and basic salary for an employee 
  and output the take home salary of the employee*/

#include <stdio.h>

int main()
{
    int emp_id;
    float basic_salary, take_home_salary, house_rent, allowance, tax;

    printf("Enter employee id: ");
    scanf("%d", &emp_id);
    printf("Basic salary: ");
    scanf("%f", &basic_salary);

    house_rent = 0.10 * basic_salary;
    allowance = 0.30 * basic_salary;
    tax = 0.05 * basic_salary;

    take_home_salary = basic_salary + house_rent + allowance - tax;
    printf("Take home salary : %f\n", take_home_salary);

    return 0;
}