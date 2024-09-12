// Type 1

// #include <stdio.h>
// int main()
// {
//     int row, col, number;
//     printf("Enter number: ");
//     scanf("%d", &number);
//     for (row = 1; row <= number; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d ", col);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//

//

// Type 2

// #include <stdio.h>
// int main()
// {
//     int row, col, n;
//     printf("Give number: ");
//     scanf("%d", &n);
//     for (int row = n; row >= 1; row--)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d ", row);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//

//

// Type 3

// #include <stdio.h>
// int main()
// {
//     int n, row, col;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d ", row);
//         }
//         printf("\n");
//     }

//     for (row = n - 1; row >= 1; row--)
//     {
//         for (col = 1; col <= row; col++)
//         {
//             printf("%d ", row);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//

//

// Type 4

#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter n: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf(" %d", col);
        }
        printf("\n");
    }
    return 0;
}
