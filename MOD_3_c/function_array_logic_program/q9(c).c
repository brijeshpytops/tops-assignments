// 9. WAP to show difference between Structure and Union.
#include <stdio.h>
#include <string.h>

struct employee_struct {
    int employee_id;
    char employee_name[50];
    float salary;
};

union employee_union {
    int employee_id;
    char employee_name[50];
    float salary;
};

int main() {
    struct employee_struct struct_Employee;
    union employee_union union_Employee;

    struct_Employee.employee_id = 101;
    strcpy(struct_Employee.employee_name, "Kayo");
    struct_Employee.salary = 50000.0;

    union_Employee.employee_id = 102;
    strcpy(union_Employee.employee_name, "Jane");
    union_Employee.salary = 60000.0;

    printf("Structure Employee:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n\n", struct_Employee.employee_id, struct_Employee.employee_name, struct_Employee.salary);


    printf("Union Employee:\n");
    printf("ID: %d\n", union_Employee.employee_id);
    printf("Name: %s\n", union_Employee.employee_name);
    printf("Salary: %.2f\n", union_Employee.salary);

    return 0;
}

