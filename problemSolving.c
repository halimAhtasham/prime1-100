#include <stdio.h>
int main()
{
    char sellerName[50];
    scanf("%s", sellerName);
    double fixed_salary, total_sell;
    scanf("%lf\n%lf", &fixed_salary, &total_sell);
    double final_salary = fixed_salary + ((total_sell * 15) / 100);
    printf("TOTAL = R$ %.2lf\n", final_salary);
    return 0;
}