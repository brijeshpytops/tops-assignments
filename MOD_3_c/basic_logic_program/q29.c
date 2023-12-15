// Convert minutes into seconds and hours

#include<stdio.h>

main()
{
	int min=60; 
    int hours, seconds; 
  
    seconds=min*3600;
	hours=min/60; 
  
    printf("\n Seconds = %d",seconds);
    printf("\nHours = %d",hours);
}