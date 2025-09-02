#include<stdio.h>

//21.Calculate net salary where net salary = gross salary + allowance – deduction. Allowances are 10% while deductions are 3% of gross salary.
int main()
{
    float gross_salary, allowance, deduction, net_salary;
    printf("Enter the gross salary: ");
    scanf("%f",&gross_salary);
    allowance = 0.10 * gross_salary;
    deduction = 0.03 * gross_salary;
    net_salary = gross_salary + allowance - deduction;
    printf("The net salary is: %.2f\n", net_salary);
    return 0;
}
