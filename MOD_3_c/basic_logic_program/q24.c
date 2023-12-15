// .Accept 5 employees name and salary and count average and total salary

//Accept 5 employees name and salary and count average and total salary.

#include<stdio.h>

main()
{
	char emp1[20], emp2[20], emp3[20], emp4[20], emp5[20];
	int s1, s2,s3, s4, s5, total_salary, avg;
	
	printf("\n Input 5 Employees' Name : ");
	scanf("%s %s %s %s %s", emp1, emp2, emp3, emp4, emp5);
	
	printf("\n Input 5 Employees' Salary : ");
	scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
	
	total_salary=s1+s2+s3+s4+s5;
	printf("\n Total Salary : %d",total_salary);
	
	avg=total_salary/5;
	printf("\n Average Salary : %d",avg);
	
}