#include <stdio.h>
int main()
{   int n, i, A[100];
    printf("\nenter no of elements : ");
    scanf("%d",&n);
    printf("\nenter %d elements :\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
     int min = A[0];
     int max = A[0];
     for(i=1; i<n; i++)
     {
        if(A[i]<min)
             min=A[i];
        if(A[i]>max)
             max=A[i];
     }
     
     printf("\nmaximum element is %d",max);
     printf("\nmimimum element is %d",min);
     return 0;
}