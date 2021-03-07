// An employee can apply for a loan at the beginning of every six months, but
// he will be sanction some amount according to the following company rules:
// RULE 1: An employee cannot enjoy more than two loans at any point of time.
// RULE 2: Maximum permissible total loan is limited and depends upon the
//         category of the employee.

#include <stdio.h>

#define MaxLoan 50000

void loanSanction()
{
    long int loan1, loan2, loan3;
    long int sum23, sancloan;

    printf("Enter The Values Of Previous 2 Loans\n");
    scanf("%ld %ld", &loan1, &loan2);

    printf("Enter The Value Of New Loan\n");
    scanf("%ld", &loan3);

    sum23 = loan2 + loan3;
    sancloan = (loan1 > 0) ? 0 : ((sum23 > MaxLoan) ? MaxLoan - loan2 : loan3);

    printf("\n\n");
    printf("Previous Loans Pending \n%ld %ld\n", loan1, loan2);
    printf("Loan Requested = %ld\n", loan3);
    printf("Loan Sanctioned = %ld\n", sancloan);
}