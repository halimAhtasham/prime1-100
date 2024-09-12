#include <stdio.h>

int main()
{
    int count = 0;

    // Using pre-increment
    printf("Using pre-increment:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("Count: %d\n", ++count);
    }

    printf("Final count value: %d\n\n", count);

    count = 0;

    // Using post-increment
    printf("Using post-increment:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Count: %d\n", count++);
    }

    printf("Final count value: %d\n", count);

    return 0;
}
