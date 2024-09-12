#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int fac = 1;

    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("Final factorial %d", fac);
    return 0;
}