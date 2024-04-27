#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float basic_salary;
    float hra;
    float da;
    float tax;
    float net_salary;
} Employee;

void calculate_salary(Employee *e) {
    e->hra = e->basic_salary * 0.20;
    e->da = e->basic_salary * 0.10;
    e->tax = e->basic_salary * 0.05;
    e->net_salary = e->basic_salary + e->hra + e->da - e->tax;
}

void save_to_file(Employee employees[], int n) {
    FILE *file = fopen("employee_payslips.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        Employee e = employees[i];
        fprintf(file, "Employee ID: %d\n", e.id);
        fprintf(file, "Name: %s\n", e.name);
        fprintf(file, "Designation: %s\n", e.designation);
        fprintf(file, "Department: %s\n", e.department);
        fprintf(file, "Basic Salary: %.2f\n", e.basic_salary);
        fprintf(file, "HRA: %.2f\n", e.hra);
        fprintf(file, "DA: %.2f\n", e.da);
        fprintf(file, "Tax: %.2f\n", e.tax);
        fprintf(file, "Net Salary: %.2f\n\n", e.net_salary);
    }

    fclose(file);
}

int main() {
    int n;
    printf("Enter the number of employee entries: ");
    scanf("%d", &n);

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);

        // Calculate salary components
        calculate_salary(&employees[i]);
    }

    for (int i = 0; i < n; i++) {
        Employee e = employees[i];
        printf("\nPay Slip for Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", e.id);
        printf("Name: %s\n", e.name);
        printf("Designation: %s\n", e.designation);
        printf("Department: %s\n", e.department);
        printf("Basic Salary: %.2f\n", e.basic_salary);
        printf("HRA: %.2f\n", e.hra);
        printf("DA: %.2f\n", e.da);
        printf("Tax: %.2f\n", e.tax);
        printf("Net Salary: %.2f\n", e.net_salary);
    }

    save_to_file(employees, n);

    printf("\nEmployee payslips have been saved to 'employee_payslips.txt'\n");

    return 0;
}
