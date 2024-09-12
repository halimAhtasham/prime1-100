#include <stdio.h>
int main()
{
    double radius, area, pi = 3.14159;
    scanf("%lf", &radius);
    area = (float)4 / 3 * pi * radius * radius * radius;
    printf("VOLUME = %.3lf\n", area);
    return 0;
}