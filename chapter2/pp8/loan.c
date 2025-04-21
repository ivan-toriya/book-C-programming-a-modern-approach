#include <stdio.h>

int main(void)
{
    float amount, interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest = (interest / 100.0f) / 12.0f;

    printf("\n");
    amount = amount * (1 + monthly_interest) - payment;
    printf("Balance remaining after first payment: $%.2f\n", amount);

    amount = amount * (1 + monthly_interest) - payment;
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount = amount * (1 + monthly_interest) - payment;
    printf("Balance remaining after third payment: $%.2f\n", amount);

    return 0;
}