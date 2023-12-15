// Write a program in C to extract a substring from a given string

#include <stdio.h>
 
int main()
{
   char str[100], sub[100];
   int position, length, c = 0;
 
   printf("Enter a str: ");
   fgets(str, sizeof(str), stdin);

   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   while (c < length) {
      sub[c] = str[position+c-1];
      c++;
   }
   sub[c] = '\0';
 
   printf("Required substr is \"%s\"\n", sub); // '\"' to print "
 
   return 0;
}