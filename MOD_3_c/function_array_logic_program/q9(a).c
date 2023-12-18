// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// and age
#include<stdio.h>
struct employee{
    int employee_no;
    char employee_name[100];
    char employee_address[100];
    int employee_age;
};
int main(){
    struct employee employee_1;
    employee_1.employee_no = 101;
    strcpy(employee_1.employee_name, "Guts");
    strcpy(employee_1.employee_address, "Hell");
    employee_1.employee_age = 27;
    
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d",employee_1.employee_no,employee_1.employee_name,employee_1.employee_address,employee_1.employee_age);
    return 0;
}
