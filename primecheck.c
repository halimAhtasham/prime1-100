#include <stdio.h>
int main()
{
    int count = 0;
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num <= 1)
    {
        count = 1;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return 0;
}