#include <stdio.h>
int main()
{
    // float sum = (float)5 / 2;
    // printf("The division is:%.f", sum);

    int maxScore;
    printf("Max Score: ");
    scanf("%d", &maxScore);

    int userScore;
    printf("User Score: ");
    scanf("%d", &userScore);

    float percentage = (float)userScore / maxScore * 100;
    printf("The percentage is : %.2f", percentage);

    return 0;
}