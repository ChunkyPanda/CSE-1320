#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[10];           // Variable for string input
   int c = 0, count[26] = {0};    // Initializing c with zero
 
   printf("Enter the string: \n");   
   gets(string);                   // Input for string
 
   while (string[c] != '\0')     // To the end of string
   {
 
       
      count[string[c]-'a']++;     // Using count to store  
  
      c++;           //Incrementing c
   }
 
   for (c = 0; c < 26; c++)        // Loop for printing
   {
       
      if (count[c] != 0 && count[c] != 1)  // Condition for repition
         printf("%c - %d, ",c+'a',count[c]);
   }
 
   return 0;
}

