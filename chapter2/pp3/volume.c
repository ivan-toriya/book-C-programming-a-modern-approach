#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    float volume = (4.0f / 3.0f) * PI * (r * r * r);

    printf("Volume of a sphere: %f\n", volume);

    return 0;
}