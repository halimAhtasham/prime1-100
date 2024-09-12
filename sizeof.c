#include <stdio.h>
int main()
{
    int i;
    printf("Enter your integer: ");
    scanf("%d", &i);
    printf("The size of your int: %d bytes", sizeof(i));
    return 0;
}