#include <stdio.h>
#include <conio.h>

void merge(int arr[],int l, int m,int r){
int i,j,k;
int n1=m-l+1;
int n2=r-m;
int L[20],M[20];

for ( i=0; i<n1; i++){
L[i]=arr[l+i];
}

for (j=0;j<n2;j++){
M[j]=arr[m+1+j];
}

j=0;
i=0;
k=l;

while (i<n1 && j<n2){
if(L[i]<=M[j]){
arr[k]=L[i];
i++;
}
else{
arr[k]=M[j];
j++;

}
k++;
}

while(i<n1){
arr[k]=L[i];
i++;
k++;

}
while(j<n2){
arr[k]=M[j];
j++;
k++;
}

}

void merge_sort(int arr[],int l,int r){
int m;
if (l<r){

m=l+(r-l)/2;
merge_sort(arr,l,m);
merge_sort(arr,m+1,r);
merge(arr,l,m,r);
}

}

void printarr(int A[],int size){
int i;
for (i=0;i<size;i++){
printf("%d ",A[i]);
}
printf("\n");
}

int main(){

int i,arr[10];
clrscr();
printf("Enter 10 elements\n");
for (i=0;i<10;i++){
printf("Element %d=",i+1);
scanf("%d",&arr[i]);
}

merge_sort(arr,0,9);
printf("sorted array= \n");
printarr(arr,9);

getch();
return 0;



}
