#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, degree;
    float r, phi, p;

    // Take cartesian co-ordinates from user
    printf("Enter the co-ordinate points (x, y): ");
    scanf("%d %d", &x, &y);

    // calculate the value of r
    r = sqrt(x * x + y * y);

    // calculate the value of phi
    // for tan inverse we use atan(value)
    phi = atan(y / x);

    printf("The polar co-ordinates of (%d,%d) is (%f, %f)", x, y, r, phi);

    // convert radian value into degree
    p = 3.141592;
    degree = phi * (180 / p);
    printf("\nThe polar co-ordinates in Degree: (%f, %d)", r, degree);

    return 0;
}