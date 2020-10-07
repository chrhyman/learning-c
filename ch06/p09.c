/*
// Author: Chris Hyman, chris@wugs.me
// Date: 6 Oct 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 9. Modify the program from Project 8 in Chapter 2 so that it also asks the
// user to enter the number of payments and then displays the balance remaining
// after each of these payments.
*/

#include <stdio.h>

int main(void)
{
    float principal, yearly_rate, monthly_payment;
    float monthly_interest, balance;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &principal);
    printf("Enter interest rate: ");
    scanf("%f", &yearly_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &payments);

    monthly_interest = 1 + yearly_rate / 100.0f / 12.0f;
    balance = principal;

    for (int i = 1; i <= payments; i++) {
        balance = balance * monthly_interest - monthly_payment;
        printf("Balance remaining after payment #%d: $%.2f\n", i, balance);
    }

    return 0;
}
