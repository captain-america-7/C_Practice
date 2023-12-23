//a program to convert and print this distance in meters, feet, inches and centimeters.
#include <stdio.h>
int main()
{
    float input_distance, m, cm, f, in;
    printf("Enter the distance between two cities(in km)\n");
    scanf("%f",&input_distance);
    m = input_distance * 1000;
    cm = input_distance * 1000 * 100;
    f = input_distance * 3280.84;
    in = input_distance * 39370.08;
    printf("The distance in Feet: %f\n", f);
    printf("The distance in Inches: %f\n", in);
    printf("The distance in Meters: %f\n", m);
    printf("The distance in Centimeters: %f\n", cm);
    return(0);
    
}