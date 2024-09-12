#include <stdio.h>
int main()
{
    int doorlock;
    printf("Enter your password: ");
    scanf("%d", &doorlock);
    switch (doorlock)
    {
    case 3774:
        printf("The door is unlocked!");
        break;

    default:
        printf("The door is locked. Try again later!!");
    }

    return 0;
}