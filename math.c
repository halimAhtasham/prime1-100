#include <stdio.h>
int main()
{
    double A, B, C, pi = 3.14159, area_triangle, area_circle, area_trapizium, area_square, area_rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);
    area_triangle = (float)1 / 2 * A * C;
    area_circle = pi * C * C;
    area_trapizium = (float)1 / 2 * (A + B) * C;
    area_square = B * B;
    area_rectangle = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", area_triangle, area_circle, area_trapizium, area_square, area_rectangle);
    return 0;
}