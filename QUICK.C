#include <stdio.h>
#include <conio.h>

int mid,high,low,a;
int search(int a[],int low,int high,int key){

while (low<=high){
mid=(low+high)/2;

if (a[mid]==key){
return mid;
}
else if (a[mid]<key){
low=mid+1;
}
else if (a[mid]>key){
high=mid-1;
}
}
return -1;
}


int main(){

int arr[10];
int n,i,res,key;
clrscr();
printf("how many elements you want to enter ?:");
scanf("%d",&n);
printf("\nenter the %d elements:",n);
for (i=0;i<n;i++){
printf("\nelement %d:",i+1);
scanf("%d",&arr[i]);
}

low=1;
high=n;
printf("\nEnter thr elements you want to Search ?:");
scanf("%d",&key);

res=search(arr,0,n-1,key);

if (res==-1){
printf("Element is not found");
}
else{
printf("Element is found at arr[%d]",res);
}

getch();
return 0;

}