// Write a program of structure employee that provides the following
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address and age

#include<stdio.h>
#include<string.h>
struct employee{
    int employee_no;
    char employee_name[100];
    char employee_address[100];
    int employee_age;
};
int main(){
    struct employee employee_1,employee_2,employee_3,employee_4,employee_5;
    employee_1.employee_no = 101;
    strcpy(employee_1.employee_name, "Guts");
    strcpy(employee_1.employee_address, "Hell");
    employee_1.employee_age = 27;
    
    employee_2.employee_no = 102;
    strcpy(employee_2.employee_name, "You");
    strcpy(employee_2.employee_address, "Heaven");
    employee_2.employee_age = 23;

    employee_3.employee_no = 103;
    strcpy(employee_3.employee_name, "Reyna");
    strcpy(employee_3.employee_address, "Ascent");
    employee_3.employee_age = 32;

    employee_4.employee_no = 104;
    strcpy(employee_4.employee_name, "Jett");
    strcpy(employee_4.employee_address, "Haven");
    employee_4.employee_age = 22;

    employee_5.employee_no = 105;
    strcpy(employee_5.employee_name, "Raze");
    strcpy(employee_5.employee_address, "Lotus");
    employee_5.employee_age = 24;
    
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d\n",employee_1.employee_no,employee_1.employee_name,employee_1.employee_address,employee_1.employee_age);
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d\n",employee_2.employee_no,employee_2.employee_name,employee_2.employee_address,employee_2.employee_age);
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d\n",employee_3.employee_no,employee_3.employee_name,employee_3.employee_address,employee_3.employee_age);
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d\n",employee_4.employee_no,employee_4.employee_name,employee_4.employee_address,employee_4.employee_age);
    printf("\nEmployee No: %d\nEmployee Name: %s\nEmployee Address: %s\nE,ployee Age: %d\n",employee_5.employee_no,employee_5.employee_name,employee_5.employee_address,employee_5.employee_age);

    return 0;
}