#include <stdio.h>
#include <math.h>

int main()
{
    int angle;
    printf("Enter the value of angle: ");
    scanf("%d", &angle);
    angle = (angle + 90) % 360;
    printf("Sin value of this angle is: %f\n", sin(angle));
    printf("Cos value of this angle is: %f\n", cos(angle));
    printf("tan value of this angle is: %f\n", tan(angle));
    printf("Cot value of this angle is: %f\n", (1 / tan(angle)));
    printf("Sec value of this angle is: %f\n", (1 / cos(angle)));
    printf("Cosec value of this angle is: %f\n", (1 / sin(angle)));

    return 0;
}