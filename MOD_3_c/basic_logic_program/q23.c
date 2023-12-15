//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>  
  
main()  
{  
    int a, b;  
      
	printf("Input a : ");  
	scanf("%d",&a);
	printf("Input b : ");  
	scanf("%d",&b);
    
    printf("a = %d and b = %d\n", a, b);  
  
    a=a*b;  
    b=a/b;  
    a=a/b;  
  
    printf("a = %d and b = %d", a ,b);  
    
}  