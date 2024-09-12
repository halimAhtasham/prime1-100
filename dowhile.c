#include <stdio.h>
int main()
{
    int i;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &i);
        printf("Your number is: %d\n", i);
        if (i % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("Thank you!");
    return 0;
}

// 01711102103 lavlu