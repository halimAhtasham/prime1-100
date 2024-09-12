#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Give a number: ");
    scanf("%d", &number);
    if (number <= 1)
    {
        count++;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    return 0;
}