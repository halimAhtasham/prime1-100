#include <stdio.h>
int main()
{
    int i, j;
    // printf("Enter your row:");
    // scanf("%d", &rows);
    for (i = 1; i <= 4; i++)
    {
        printf("%d ", i);
        for (j = 1; j <= 5; j++)
        {
            printf("*%d", j);
        }
        printf("\n");
    }
    return 0;
}