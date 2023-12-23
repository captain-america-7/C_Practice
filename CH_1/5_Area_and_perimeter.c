#include<stdio.h>
int main()
{
    float length, b, r,ca, cc, ra, rp;

    //For rectangle
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    //For circle
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    //Calculate area & perimeter of the rectangle...
     ra = length * b;    //Area of Rectangle = Length x Breadth
     rp = 2 * (length + b);    //Perimeter of Rectangle = 2 x (Length + Breadth) or addition of all sides

     //Calculate are & circumference of the circle...
     ca = 3.14 * r * r;   //Area of Circle = 2 x Pi x r^2 where Pi = 3.14
     cc = 2 * 3.14 * r;  //Circumference of Circle = 2 x Pi x r

     printf("\nThe area of the rectangle: %0.2f", ra);
     printf("\nThe perimeter of the rectangle: %.2f", rp);
     printf("\n\nThe area of the circle: %.2f", ca);
     printf("\nThe circumference of the circle: %.2f", cc);

     return (0);
}