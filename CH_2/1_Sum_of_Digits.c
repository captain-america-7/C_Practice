#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Type the digit\n");
    scanf("%d",&num);
    if (num>99999){
        printf("Number too large");
        return 0;
    }
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("Digit sum: %d", sum);
}