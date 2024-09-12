#include <stdio.h>

int main()
{
    // You can use int, double, float for calculations
    double length, width, area;
    printf("Enter the value:");

    // Also can use %d, %f, %lf for assigning values
    scanf("%lf %lf", &length, &width);
    area = length * width;
    printf("The area is %lf", area);
    return 0;
}