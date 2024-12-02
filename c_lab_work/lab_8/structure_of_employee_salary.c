#include <stdio.h>
#include <string.h>
// Define structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    int n, i;
    float threshold, highestSalary = 0.0;
    int highestSalaryIndex = 0;
    // Input: Number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    // Array of employees
    struct Employee employees[n];
    // Input: Employee details
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[i].name); // %[^\n] reads string with spaces
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
        // Track highest salary
        if (employees[i].salary > highestSalary) {
            highestSalary = employees[i].salary;
            highestSalaryIndex = i;
        }
    }
    // Input: Salary threshold
    printf("\nEnter the salary threshold: ");
    scanf("%f", &threshold);
    // Output: Employees earning above the threshold
    printf("\nEmployees earning more than %.2f:\n", threshold);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (employees[i].salary > threshold) {
            printf("ID: %d, Name: %s, Salary: %.2f\n",
                   employees[i].id, employees[i].name, employees[i].salary);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found earning above %.2f\n", threshold);
    }
    // Output: Employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n",
           employees[highestSalaryIndex].id,
           employees[highestSalaryIndex].name,
           employees[highestSalaryIndex].salary);
    return 0;
}
