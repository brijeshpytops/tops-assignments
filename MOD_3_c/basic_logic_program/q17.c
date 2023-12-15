//Calculate person’s insurance premium based on salary.

#include<stdio.h>

main()
{
 	float salary, years;
 	printf("\n Enter your Salary :");
 	scanf("%d", &salary);
 
 	printf("\n Enter your Insurance policy term - years : ");
 	scanf("%d", &years);
 
 	printf("\n Your Yearly Premium  : %8.2f\n", salary/(years)); 
 
}