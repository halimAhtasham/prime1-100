#include <stdio.h>

int main()
{
    char choice;

    do
    {
        float grade;
        printf("Enter your number: ");
        scanf("%f", &grade);

        if (grade >= 90 && grade <= 100)
        {
            printf("Your grade is A+.\n");
        }
        else if (grade >= 85 && grade < 90)
        {
            printf("Your grade is A.\n");
        }
        else if (grade >= 80 && grade < 85)
        {
            printf("Your grade is A-.\n");
        }
        else if (grade >= 75 && grade < 80)
        {
            printf("Your grade is B+.\n");
        }
        else if (grade >= 70 && grade < 75)
        {
            printf("Your grade is B.\n");
        }
        else if (grade >= 65 && grade < 70)
        {
            printf("Your grade is B-.\n");
        }
        else if (grade >= 60 && grade < 65)
        {
            printf("Your grade is C.\n");
        }
        else if (grade >= 50 && grade < 60)
        {
            printf("Your grade is D.\n");
        }
        else if (grade >= 0 && grade < 50)
        {
            printf("Your grade is F.\n");
        }
        else
        {
            printf("Invalid input.\n");
        }

        printf("Do you want to enter another grade? (y/n): ");
        scanf(" %c", &choice); // Using a space before %c to consume the newline character left in the input buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
