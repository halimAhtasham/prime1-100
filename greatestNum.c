#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C, ab, greatest;
    scanf("%d %d %d", &A, &B, &C);
    ab = (A + B + abs(A - B)) / 2;
    greatest = (ab + C + abs(ab - C)) / 2;
    printf("%d eh o maior", greatest);
    return 0;
}