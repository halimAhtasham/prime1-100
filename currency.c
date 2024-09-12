#include <stdio.h>

int main()
{
    int value, temp;
    scanf("%d", &value);
    temp = value;

    printf("%d\n", value);

    printf("%d nota(s) de R$ 100,00\n", temp / 100);
    temp %= 100;

    printf("%d nota(s) de R$ 50,00\n", temp / 50);
    temp %= 50;

    printf("%d nota(s) de R$ 20,00\n", temp / 20);
    temp %= 20;

    printf("%d nota(s) de R$ 10,00\n", temp / 10);
    temp %= 10;

    printf("%d nota(s) de R$ 5,00\n", temp / 5);
    temp %= 5;

    printf("%d nota(s) de R$ 2,00\n", temp / 2);
    temp %= 2;

    printf("%d nota(s) de R$ 1,00\n", temp);

    return 0;
}
