#include <stdio.h>
#include <stdbool.h>

int main()
{
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';
    bool profit = false;

    printf("Number of items: %d\nCost Per Items: %.2f\nTotal Cost: %.3f\nProfit: %d", items, cost_per_item, total_cost, profit);

    return 0;
}