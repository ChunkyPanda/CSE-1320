#include <stdio.h>
 
int main()
{
   int n,m, reverse = 0;                // Initializing reverse with zero
   printf("Enter a number to reverse\n");     // Taking input for the number to be reversed
   scanf("%d", &n);
   m=n;                            //Assigning n's value to m
  
   while (n != 0)      //Terminating condition
   {
      reverse = reverse * 10;             // Loop for reversing
      reverse = reverse + n%10;           // Reassigning reverse every iteration	
      n= n/10;                            // Reassigning n every iteration 
   }
 
   printf("Sum = %d+%d=%d", m,reverse,(m+reverse));   // Printing the desired output
 
   return 0;
}
