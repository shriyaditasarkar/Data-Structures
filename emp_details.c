#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    float totalSalary = 0;
    int highestIndex = 0;

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter name: ");
        scanf("%49s", emp[i].name);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        totalSalary += emp[i].salary;
    }

    // Find employee with highest salary
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }

    // Display employee with highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", emp[highestIndex].id);
    printf("Name: %s\n", emp[highestIndex].name);
    printf("Salary: %.2f\n", emp[highestIndex].salary);

    // Calculate average salary
    float averageSalary = totalSalary / n;

    printf("\nAverage salary of all employees: %.2f\n", averageSalary);

    return 0;
}