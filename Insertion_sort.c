//INSERTION SORT:

#include<stdio.h>
void main()
{
    int a[30],i,j,n,key;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<a[j]*n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[1+i]=key;
        printf("STEP %d\n",j);
        for(i=0;i<n;i++)
        {
        
        printf("%d  ",a[i]);
        }
    printf("\n");
    }
    printf("\n");
    printf("The final sorted array is: ");
    for(i=0;i<n;i++)
       {
        printf("%d  ",a[i]);
       }
}

/*Output:

Enter the number of elements4
1
3
2
5
STEP 1
1  3  2  5  
STEP 2
1  2  3  5  
STEP 3
1  2  3  5  

The final sorted array is: 1  2  3  5

*/  
