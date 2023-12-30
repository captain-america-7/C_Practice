// Aruntej [21046]
#include <stdio.h>
int main()
{
    float red, green, blue, cyan, magenta, yellow, k, w = 0;

    printf("\nEnter the color values of R, G and B : ");
    scanf("%f %f %f", &red, &green, &blue);

    red /= 255;
    green /= 255;
    blue /= 255;

    if (w < red)
        w = red;

    if (w < green)
        w = green;

    if (w < blue)
        w = blue;

    cyan = (w - red) / w;
    magenta = (w - green) / w;
    yellow = (w - blue) / w;
    k = 1 - w;

    printf("\nC : %f\nM : %f\nY : %f\nK : %f", cyan, magenta, yellow, k);
    return 0;
}