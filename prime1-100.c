// #include <stdio.h>

// int main()
// {
//     int primes[25];     // Array to store prime numbers, assuming there are at most 25 primes between 1 to 100
//     int num_primes = 0; // Variable to keep track of the number of prime numbers found

//     // Loop through numbers from 2 to 100
//     for (int i = 2; i <= 100; i++)
//     {
//         int is_prime = 1; // Assume number is prime initially

//         // Check if the number is divisible by any number other than 1 and itself
//         for (int j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 is_prime = 0; // If divisible, not prime
//                 break;
//             }
//         }

//         // If the number is prime, add it to the array
//         if (is_prime)
//         {
//             primes[num_primes] = i;
//             num_primes++;
//         }
//     }

//     // Print the prime numbers stored in the array
//     printf("Prime numbers between 1 to 100:\n");
//     for (int i = 0; i < num_primes; i++)
//     {
//         printf("%d ", primes[i]);
//     }
//     printf("\n");

//     return 0;
// }

/**#include <stdio.h>
int main()
{
    int total_count = 0;
    for (int number = 1; number <= 100; number++)
    {
        int count = 0;
        if (number <= 1)
        {
            count = 1;
        }

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", number);
            total_count++;
        }
    }
    printf("\nTotal Prime number: %d", total_count);

    return 0;
}**/


// Another

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int number, count = 0, total_number = 0, sum = 0;

//     for (number = 1; number <= 100; number++)
//     {
//         count = 0;
//         if (number <= 1)
//         {
//             count = 1;
//         }
//         else
//         {
//             for (int i = 2; i <= sqrt(number); i++)
//             {
//                 if (number % i == 0)
//                 {
//                     count = 1;
//                     break;
//                 }
//             }
//         }

//         if (count == 0)
//         {
//             printf("%d This is a prime number.\n", number);
//             sum = sum + number;
//             total_number++;
//         }
//     }
//     printf("\n%d\nTotal Sum %d", total_number, sum);
//     return 0;
//     getchar();
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int number, count = 0, total_number = 0, sum = 0, start, end;
    printf("Enter the start and end: ");
    scanf("%d %d", &start, &end);

    for (number = start; number <= end; number++)
    {
        count = 0;
        if (number <= 1)
        {
            count = 1;
        }
        else
        {
            for (int i = 2; i <= sqrt(number); i++)
            {
                if (number % i == 0)
                {
                    count = 1;
                    break;
                }
            }
        }

        if (count == 0)
        {
            printf("%d This is a prime number.\n", number);
            sum = sum + number;
            total_number++;
        }
    }
    printf("\n%d\nTotal Sum %d", total_number, sum);
    return 0;
    getchar();
}