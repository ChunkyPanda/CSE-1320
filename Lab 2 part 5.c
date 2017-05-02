#include <stdio.h>
#include<string.h>
int main()
{
 	int i,a;          
 	char array[100];       // Large string
 	printf("Enter string:\n");
 	gets(array);               // Input for string
 	a=strlen(array)-1;           // For the length of the string
 	printf("Original sentence: ");
 	for (i = 0; i <=a ; i++)     // Printing original sentence
 		printf("%c", array[i]);
 	printf("\n");
 	printf("The reverse sentence: ");    
 	for (i = a; i >=0; i--)           // Loop for reverse sentence
 		printf("%c", array[i]);
 	printf("\n");
 	
}

