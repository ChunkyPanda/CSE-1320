#include<stdio.h>
int main(){int i,j,k,v;
    int A[18],B[5];
    printf("\nEnter the elements of Array 'A'(13 elements): ");         //Taking input for sorted array A
    for(i=0;i<13;i++)
     scanf("%d",&A[i]);
    printf("\nEnter the elements of array 'B'(5 elements): ");         //Taking input for sorted array B
    for(j=0;j<5;j++)
     scanf("%d",&B[j]);
    i=12;j=4;k=17;                                                     //Initializing value of i,j,k
    while(k>=0){                     //Terminating condition
        if((i>=0)&&(j>=0)){          //Entering the members while starting from last element
            if(A[i]>=B[j]){
                A[k]=A[i];
                i--;                 // Decreasing value of i
            }
            else{
               A[k]=B[j];
               j--;                 //Decreasing value of j
            } 
        }
        k--;    
    }
    while(j>=0){                   //Filling up the remainder of elements
        A[k]=A[j];
        k--;j--;
    }
    printf("\nThe sorted and merged array is: ");   //Printing the merged array
    for(v=0;v<18;v++)
    printf("%d ",A[v]);
return 0;
}
