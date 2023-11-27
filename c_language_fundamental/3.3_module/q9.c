// Write a program of structure employee that provides the following information -print and display empno, empname, address and age 

#include<stdio.h>

struct Employee{
    int empNo,empAge;
    char empName[50],empAddress[100];
};

void info(struct Employee emp){
    printf("\nEmployee Number: %d",emp.empNo);
    printf("\nEmployee Name: %s",emp.empName);
    printf("\nEmployee Age: %d",emp.empAge);
    printf("\nEmployee Address: %s",emp.empAddress);
}

int main(){
    struct Employee emp1,emp2;

    emp1.empNo=1001;
    strcpy(emp1.empName,"Levi Ackerman");
    strcpy(emp1.empAddress,"Shiganshina district, Paradise");
    emp1.empAge=27;
    info(emp1);

    emp2.empNo=20;
    strcpy(emp2.empName,"Mikasa Ackerman");
    strcpy(emp2.empAddress,"Shiganshina district, Paradise");
    emp2.empAge=20;
    info(emp2);
    
    return 0;
}