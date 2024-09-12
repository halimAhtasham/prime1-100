#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int number, guess, n_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 to 100
    // printf("The number is %d\n", number);

    do
    {
        printf("Guess the number between 1 and 100 = ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Choose a lower number.\n");
        }
        else if (guess < number)
        {
            printf("Choose a higher number.\n");
        }
        else
        {
            printf("You have guessed it right in %d attempts.\n", n_guesses);
        }
        n_guesses++;

    } while (guess != number);
    return 0;
}