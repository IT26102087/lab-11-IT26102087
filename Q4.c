#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float salary;
} employee_t;

void printHighestPaid(employee_t emp[], int n) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }
    printf("Highest Salary: %s, ID: %d, Salary: %.0f\n",
           emp[highestIndex].name, emp[highestIndex].id, emp[highestIndex].salary);
}

int main() {
    employee_t employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Employee %d - Name: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0;

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        getchar();
    }

    printHighestPaid(employees, 5);
    return 0;
}
