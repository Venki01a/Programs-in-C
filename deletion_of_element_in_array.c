#include<stdio.h>
int main()
{
    int n,a[100],i;
    printf("Enter the elements of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     {
        printf("Enter the array: ");
        scanf("%d",&a[i]);
     }
    for(i=n-1;i>=0;i--)
     {
        printf("%d",a[i]);
        printf("\n");
     }
    
}