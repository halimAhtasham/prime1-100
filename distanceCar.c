#include <stdio.h>
int main()
{
    int taken_time, total_distance, per_km_time = 2;
    scanf("%d", &total_distance);
    taken_time = total_distance * per_km_time;
    printf("%d minutos\n", taken_time);
    return 0;
}