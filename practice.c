#include <stdio.h>
int main()
{
    int i = 1, num, sum = 0;
    do
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        sum += num;

    } while (1);
    printf("%d", sum);
}