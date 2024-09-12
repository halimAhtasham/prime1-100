#include <stdio.h>

int main()
{
    float myFloatNum = 3.5;
    double myDoubleNum = 19.44;
    float myAnotherNum = 4.5;

    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);

    // To remove the extra zeroes

    printf("%.1f\n", myAnotherNum);
    return 0;
}