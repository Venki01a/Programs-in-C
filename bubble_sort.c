#include<stdio.h>
int main()
{
    int n,a[100],i,j,k;
    printf("Enter the number of elements to store: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     {
       printf("Enter element of array: ");
       scanf("%d",&a[i]);
     }
    for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-i-1;j++)
         {
            if(a[j]>a[j+1])
             {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
             }
         }
     }
    printf("Elements in assending order: ");
    for(i=0;i<n;i++)
     {
      printf("%d\n",a[i]);
     }
   
}