#include <stdio.h>

// Define the Employee structure
struct Employee
{
    int id;
    char name[50];
    char date_of_birth[11];
    int age;
    char contact_no[15];
    float salary;
};

int main()
{
    struct Employee employees[5];
    int i;

    // Input information for 5 employees
    for (i = 0; i < 5; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Name: ")
            scanf(" %[^\n]", employees[i].name);

        printf("Enter Date of Birth (YYYY-MM-DD): ");
        scanf("%s", employees[i].date_of_birth);

        printf("Enter Age: ");
        scanf("%d", &employees[i].age);

        printf("Enter Contact Number: ");
        scanf("%s", employees[i].contact_no);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n"); // Adding a newline for better readability
    }

    // Display employees with salary between 10000 and 30000
    printf("\nEmployees with salary between 10000 and 30000:\n");
    for (i = 0; i < 5; i++)
    {
        if (employees[i].salary >= 10000 && employees[i].salary <= 30000)
        {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Date of Birth: %s\n", employees[i].date_of_birth);
            printf("Age: %d\n", employees[i].age);
            printf("Contact Number: %s\n", employees[i].contact_no);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("\n"); // Adding a newline for better readability
        }
    }

    return 0;
}
