#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        printf("%d %d halim\n", i, sum);
        sum = sum + i;
        }
    printf("Sum is %d", sum);

    return 0;
}