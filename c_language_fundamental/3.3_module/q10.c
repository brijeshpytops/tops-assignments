// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age 
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
    struct Employee emp[5];

    emp[0].empNo=1001;
    strcpy(emp[0].empName,"Levi Ackerman");
    strcpy(emp[0].empAddress,"Shiganshina district, Paradise");
    emp[0].empAge=27;
    info(emp[0]);

    printf("\n");

    emp[1].empNo=1002;
    strcpy(emp[1].empName,"Mikasa Ackerman");
    strcpy(emp[1].empAddress,"Shiganshina district, Paradise");
    emp[1].empAge=20;
    info(emp[1]);

    printf("\n");
    
    emp[2].empNo=1003;
    strcpy(emp[2].empName,"Annie Leonhart");
    strcpy(emp[2].empAddress,"Shiganshina district, Paradise");
    emp[2].empAge=25;
    info(emp[2]);

    printf("\n");

    emp[3].empNo=1004;
    strcpy(emp[3].empName,"Armin Arlet");
    strcpy(emp[3].empAddress,"Shiganshina district, Paradise");
    emp[3].empAge=24;
    info(emp[3]);

    printf("\n");

    emp[4].empNo=1004;
    strcpy(emp[4].empName,"Bertolt");
    strcpy(emp[4].empAddress,"Shiganshina district, Paradise");
    emp[4].empAge=22;
    info(emp[4]);

    return 0;
}