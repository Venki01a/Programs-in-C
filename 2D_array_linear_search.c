#include<stdio.h>
int main()
{
    int m,n,a[100][100],i,j,k,F=0,i1,j1;
    printf("Enter the no. of rows of array:");
    scanf("%d",&m);
    printf("Enter the no. of columns of array:");
    scanf("%d",&n);

    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("Enter value for array of index a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
         }
     }
    printf("Enter element to be searched:");
    scanf("%d",&k);
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("%d\t",a[i][j]);
         }
        printf("\n");
     }
   for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
       {
         if(a[i][j]==k)
          {
            F=1;
            i1=i;
            j1=j;
            break;
          }
       }
    }
   if(F==1)
    {
      printf("Element found in index %d %d",i1,j1);
    }
   else
    {
      printf("Element not found");
    }
}