// A program to calculate Gross Salary
#include <stdio.h>
int main()
{
    float basic_salary, dearness_allowance, house_rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic_salary);

    dearness_allowance = 0.4 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dearness_allowance + house_rent;

    printf("\n Basic Salary      :- %.2f",  basic_salary);
    printf("\n Dearness Allowance:- %.2f", dearness_allowance);
    printf("\n House Rent        :- %.2f", house_rent);
    printf("\n\n Gross Salary    :- %.2f", gross_salary);
    return (0);
}