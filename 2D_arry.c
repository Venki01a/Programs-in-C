#include<stdio.h>
int main()
{
    int n,a[100][100],i,j,k=0;
    printf("Enter the no. of elements of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("Enter value for array: ");
            scanf("%d",&a[i][j]);
            k=k+a[i][j];
         }
     }
    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("%d",a[i][j]);
         }
        printf("\n");
     }
    printf("Addition of all elements is %d",k);
}