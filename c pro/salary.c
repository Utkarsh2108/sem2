// A computer manafacturing company has the following monthly compensation
// policy to their sales-persons:
//   Minimum base salary                       :  1500.00
//   Bonus for every computer sold             :  200.00
//   Commission on the total monthly sales     :  2 per cent
// Since the prices of computers are changing, the sales price of each
// Computer  is fixed at the beginning of every month. Write a program
// to compute a sales-person's gross salary.

#include <stdio.h>

#define BONUS_RATE 200.00
#define BASE_SALARY 1500.00
#define COMMISSION_RATE 0.02

void calcGrossSalary()
{
    int quantity;
    float bonus, price, commission, grossSalary;

    printf("Input The Number Of Items Sold And Price\n");
    scanf("%d %f", &quantity, &price);

    bonus = BONUS_RATE * quantity;
    commission = COMMISSION_RATE * price * quantity;
    grossSalary = BASE_SALARY + bonus + commission;

    printf("Bonus: %.2f\n", bonus);
    printf("Commission: %.2f\n", commission);
    printf("Gross Salary: %.2f\n", grossSalary);
}