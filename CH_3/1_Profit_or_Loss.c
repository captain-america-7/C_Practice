/* Aruntej [21046] */
#include <stdio.h>
int main()
{
    float cost_price, selling_price, loss, profit;

    printf("\n Enter the cost price of an item=");
    scanf("%f", &cost_price);

    printf("\n Enter the selling price of an item=");
    scanf("%f", &selling_price);
    //Using if else for profit or loss calculation
    if (cost_price > selling_price)
    {
        loss = cost_price - selling_price;
        printf("\n The seller has suffered the loss.The loss is=%0.2f", loss);
    }
    else
    {
        profit = selling_price - cost_price;
        printf("\n The seller has gain the profit.The profit is=%0.2f", profit);
    }
}