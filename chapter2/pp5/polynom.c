#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter value of x: ");
    scanf("%f", &x);

    float result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

    printf("Answer: %f\n", result);

    return 0;
}