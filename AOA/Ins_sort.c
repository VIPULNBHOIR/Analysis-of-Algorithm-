//INSERTION SORT

#include<stdio.h>
int main(){

   int i, j, n, key,A[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", count);
   // This loop would store the input numbers in array
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);

   // Implementation of insertion sort algorithm
   for(i=1;i<n;i++){
      key=A[i];
      j=i-1;
      while((key<A[j])&&(j>=0)){
         A[j+1]=A[j];
         j=j-1;
      }
      A[j+1]=key;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",A[i]);

   return 0;
}