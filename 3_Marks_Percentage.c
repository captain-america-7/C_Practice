#include<stdio.h>
int main()
{
    int hindi, math, english, science, art, total;
    float percentage;
    printf("Enter the marks of Hindi: ");
    scanf("%d", &hindi);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of Art: ");
    scanf("%d", &art);

    total = hindi+math+english+science+art;

    percentage = total/5;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
}