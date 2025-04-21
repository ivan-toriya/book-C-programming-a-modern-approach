#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int bills_20 = amount / 20;
    printf("$20 bills: %d\n", bills_20);
    amount = amount - (bills_20 * 20);

    int bills_10 = amount / 10;
    printf("$10 bills: %d\n", bills_10);
    amount = amount - (bills_10 * 10);

    int bills_5 = amount / 5;
    printf("$5 bills: %d\n", bills_5);
    amount = amount - (bills_5 * 5);

    int bills_1 = amount / 1;
    printf("$1 bills: %d\n", bills_1);
    amount = amount - (bills_1 * 1);

    return 0;
}