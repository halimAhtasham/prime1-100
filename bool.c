#include <stdio.h>
int main()
{
    int myAge, votingAge;
    printf("Your Age: ");
    scanf("%d", &myAge);
    printf("Voting Age in your country: ");
    scanf("%d", &votingAge);

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!");
    }
    else
    {
        printf("Sorry, you can not participate in the vote!");
    }
}