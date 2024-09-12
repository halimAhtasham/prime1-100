#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

#define ROWS_A 3
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 3

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Define matrices A and B and initialize with random numbers
    int A[ROWS_A][COLS_A];
    int B[ROWS_B][COLS_B];

    printf("Matrix A:\n");
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_A; j++)
        {
            A[i][j] = rand() % 10; // Generate random numbers between 0 and 9
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matrix B:\n");
    for (int i = 0; i < ROWS_B; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            B[i][j] = rand() % 10; // Generate random numbers between 0 and 9
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int N[ROWS_A][COLS_B] = {0}; // Resultant matrix initialized with zeros

    // Perform matrix multiplication
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            for (int k = 0; k < COLS_A; k++)
            {
                N[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the resulting matrix N
    printf("Resultant Matrix (N):\n");
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }

    return 0;
}
