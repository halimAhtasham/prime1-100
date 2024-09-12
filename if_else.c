#include <stdio.h>
int main()
{
    /**int time = 22;
    if (time < 10)
    {
        printf("Good morning");
    }
    else if (time < 20)
    {
        printf("Good evening");
    }
    else
    {
        printf("Good night");
    }**/
    /**int time = 20;
    (time == 20) ? printf("Good morning") : printf("Good evening");**/

    int doorCode;
    printf("Enter your password: ");
    scanf("%d", &doorCode);
    if (doorCode == 3774)
    {
        printf("The door is unlocked!");
    }
    else
    {
        printf("The door is locked. Try again later!!");
    }

    return 0;
}
