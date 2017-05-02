#include<stdio.h>
#include<string.h>
int main()
{ char a[5][5],temp[5];           // Declaring string 2-D array and temporary variable   
  int i,j,x,y;
  printf("Enter strings one by one\n\n");
  for(i=0;i<5;i++)               // Input for the 5 strings of 4 characters
   { scanf("%s",a[i]);
    }
	for(x=0; x<5; x++)         // Using bubble sort technique

	{

		for(y=0; y<4; y++)

		{

			if(strcmp(a[y],a[y+1])>=0)      // To determine the bigger string

			{

				strcpy(temp,a[y+1]);      // Swapping of values using string copy

				strcpy(a[y+1],a[y]);

				strcpy(a[y],temp);

			}

		}

	}
	printf("\nSorted strings:\n\n");
	for(i=0;i<5;i++)                  // Printing the sorted string array
{printf("%s\n",a[i]);
}
}
