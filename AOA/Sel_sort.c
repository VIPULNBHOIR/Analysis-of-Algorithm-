


#include<stdio.h>
int main(){
  
   int i, j, n, temp, A[25];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements:\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);
 
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(A[i]>A[j])
         {
            temp=A[i];
            A[i]=A[j];
           A[j]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",A[i]);

   return 0;
}