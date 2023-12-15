// 32. Write a C program to input basic salary of an employee and calculate
// its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>

int main(){
    double basicSalary,grossSalary;

    printf("\nEnter Basic Salary: ");
    scanf("%lf",&basicSalary);

    if(basicSalary<=10000){
        grossSalary = basicSalary + (basicSalary*20.0/100.0) + (basicSalary*80.0/100.0);
    }else if(basicSalary>10000 && basicSalary<=20000){
        grossSalary = basicSalary + (basicSalary*25.0/100.0) + (basicSalary*90.0/100.0);
    }else{
        grossSalary = basicSalary + (basicSalary*30.0/100.0) + (basicSalary*95.0/100.0);
    }
    printf("\nGross Salary %.2lf",grossSalary);
    return 0;
}