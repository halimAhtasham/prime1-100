#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

int main()
{
    int m1[ROWS][COLS], m2[ROWS][COLS], res[ROWS][COLS];

    // Seed the random number generator
    srand(time(0));

    // Fill the matrices with random numbers and print them
    printf("Matrix m1:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            m1[i][j] = rand() % 10; // Random number between 0 and 9
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix m2:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            m2[i][j] = rand() % 10; // Random number between 0 and 9
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }

    // Add the matrices and print the result
    printf("\nResultant Matrix res:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            res[i][j] = m1[i][j] + m2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
