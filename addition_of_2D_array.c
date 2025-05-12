#include<stdio.h>
int main()
{
    int m,n,a[100][100],b[100][100],c[200][200],i,j;
    printf("Enter the no. of rows of array a:");
    scanf("%d",&m);
    printf("Enter the no. of columns of array a:");
    scanf("%d",&n);

    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("Enter value for array a %d%d : ",i,j);
            scanf("%d",&a[i][j]);
         }
     }
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("%d  ",a[i][j]);
         }
        printf("\n");
     }
        for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("Enter value for array b %d%d : ",i,j);
            scanf("%d",&b[i][j]);
         }
     }
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            printf("%d  ",b[i][j]);
         }
        printf("\n");
     }
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
         {
            c[i][j]=a[i][j] + b[i][j];
         }
     }
    printf("\nSum of two 2D arrays: \n");
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
       {
         printf("%d  ",c[i][j]);
         if(j==n-1)
          {
            printf("\n");
          }
       }
     }
    return 0;
}     

