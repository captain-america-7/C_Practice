#include <stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32)*5/9;

    printf("The Temperature in Centigrade Degree: %.2f", celsius);
    return (0);
}