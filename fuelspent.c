#include <stdio.h>
int main()
{
    int time_spent, avg_speed;
    scanf("%d\n%d", &time_spent, &avg_speed);
    float total_distance = time_spent * avg_speed;
    float fuel_spent = total_distance / 12;
    printf("%.3f\n", fuel_spent);
    return 0;
}