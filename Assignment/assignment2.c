
#include <stdio.h>
int func(int a);
int main()
{
    int i, a = 1;
    for (i = 0; i < 3; i++)
    {
        a = func(a);
        printf("\n");
    }
    return 0;
}
int func(int a)
{
    int i = 0, check = 0, j, m, count = 0;
    while (count < a)
    {
        for (j = 2; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                check = 0;
                break;
            }
            else
            {
                check = 1;
            }
        }
        if (check == 1)
        {
            printf("%d ", i);
            count++;
            m = i;
        }
        i++;
    }
    return m;
}