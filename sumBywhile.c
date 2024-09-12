#include <stdio.h>
int main()
{
    int i = 0, sum = 0;
    while (i < 10)
    {

        i++;
        sum = sum + i;
        // printf("%d\n", sum);
    }
    printf("%d\n", sum);
    return 0;
}