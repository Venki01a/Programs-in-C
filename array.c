#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter the no. of elements of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     {
        printf("Enter the elements of array:");
        scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
     {
        printf("%d  ",a[i]);
     }
}