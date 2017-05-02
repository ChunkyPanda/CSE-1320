#include<stdio.h>
int main(){
    int a[20],t;
    int i,j;
    printf("\nEnter the vaules in the array(20 elements): ");       
    for(i=0;i<20;i++)                            // Taking input for 20 members of array
     scanf("%d",&a[i]);
    printf("\nEnter the target value for sum of 2 elements: ");
     scanf("%d",&t);
     int k=0;                                 // Initializing k with zero
    for(i=0;i<19;i++)                         // For finding the members,nested loops
     for(j=i+1;j<20;j++){
        if((a[i]+a[j])==t){                   // The condition for finding the target
            k++;                              // Incrementing k if traget found
            printf("\n(%d,%d)",a[i],a[j]);
        }
     }
    if(k==0)                               // When k remains zero
     printf("No pair of integers in the given array can be summed to the target value");      

}
