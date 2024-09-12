#include <stdio.h>
int main()
{
    int second, temp, hours, minute, sec;
    scanf("%d", &second);

    hours = second / 3600;
    temp = second % 3600;
    minute = temp / 60;
    temp = temp % 60;
    sec = temp;

    printf("%d:%d:%d\n", hours, minute, sec);

    return 0;
}