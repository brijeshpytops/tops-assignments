//Accept 5 expense from user and find average of expense.

#include<stdio.h>

main()
{
	int s1, s2,s3, s4, s5, total_salary, avg;
	
	printf("\n Enter 5 Users Expenses : ");
	scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
	
	total_salary=s1+s2+s3+s4+s5;
	printf("\n Total Expense : %d",total_salary);
	
	avg=total_salary/5;
	printf("\n Average Expense : %d",avg);
	
}