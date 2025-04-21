#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter value of x: ");
    scanf("%f", &x);

    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Answer: %f\n", result);

    return 0;
}