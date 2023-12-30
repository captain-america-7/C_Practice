// Aruntej [21046]
#include <stdio.h>
int main()
{
    int num,a, rev_num = 0;
    printf("Enter a five digit number : ");
    scanf("%d", &num);
    a=num;
    while (num != 0)
    {
        rev_num = rev_num * 10 + (num % 10);
        num = num / 10;
    }
    if (a==rev_num){
        printf("\n\nThe reverse of the number %d is same as actual number.", a);
    }
    return 0;
}