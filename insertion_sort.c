#include<stdio.h>
int main()
{
int n,i,j,temp;
int arr[100];
printf("Enter no of elements to store: ");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
    printf("Enter the element: ");
    scanf("%d",&arr[i]);
 }
for(i=0;i<n;i++)
 {
    printf("%d\n",arr[i]);
 }
for(i=1;i<n;i++)
 {
    j=i;
    while(j>0 && arr[j-1]>arr[j])
     {
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
     }
 }
printf("Sorted array in asending order: ");
for(i=0;i<n;i++)
 {
    printf("%d\n",arr[i]);
 }
}
