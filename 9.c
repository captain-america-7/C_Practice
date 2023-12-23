#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", a, b, c);
}

//In scanf before a, b and c we does not use '&'.
//correct line will be : scanf(“% d % d % d”, &a, &b, &c);