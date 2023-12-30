// Aruntej [21046]
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, num;

    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    num = abs(num);

    printf("The absolute value of %d is %d", n, num);
    return 0;
}