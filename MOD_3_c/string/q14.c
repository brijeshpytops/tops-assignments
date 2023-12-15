// Write a program in C to combine two strings manually


#include<stdio.h>

main()
{
	char s1[1000],s2[1000];  
    int i,j;
 
    printf("\n Input string1 : ");
    gets(s1);
    printf("\n Input string2 : ");
    gets(s2);
    
    j=strlen(s1);
    
    for(i=0;s2[i]!='\0';i++)  
    {
    	s1[i+j]=s2[i];
	}
	s1[i+j]='\0';
 
    printf("After concat  = %s",s1); 
}