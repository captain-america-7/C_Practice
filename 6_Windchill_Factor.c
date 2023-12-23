#include <stdio.h>
#include <math.h>
int main()
{
    float temp, wind, wcf;

    // input temperature in fahrenheit
    printf("Enter air temperature in Fahrenheit: ");
    scanf("%f", &temp);

    // input wind velocity (speed) in miles per hours (mph)
    printf("Enter the wind speed in mph: ");
    scanf("%f", &wind);

    wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(wind, 0.16);

    printf("Wind Chill Factor in Fahrenheit: %.2f", wcf);

    return 0;
}