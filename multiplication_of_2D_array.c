#include<stdio.h>
int main()
{
   int n,m,a[100][100],b[100][100],c[100][100],i,j,k,e=0,p;
    printf("Enter the no. of  rows:");
    scanf("%d",&n);
    printf("Enter the no. of  colmns:");
    scanf("%d",&m);
    if(n==m)
    {
    for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
         {
            printf("Enter value for array a : ");
            scanf("%d",&a[i][j]);
         }
     }
    for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
         {
            printf("%d  ",a[i][j]);
         }
        printf("\n");
     }
        for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
         {
            printf("Enter value for array b : ");
            scanf("%d",&b[i][j]);
         }
     }
    for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
         {
            printf("%d  ",b[i][j]);
         }
        printf("\n");
     }
    for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
       { e=0;
         for(k=0;k<m;k++)
          {
            e=e+a[i][k]*b[k][j];
          }
            c[i][j]=e;
            
          }
         
       }
     
    printf("\nMultiplication of two 2D arrays: \n");
    for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
       {
         printf("%d  ",c[i][j]);
       }
      printf("\n");
     }
    }
    
    else{

      printf("for array multiplication r=c in required");
    }  
    return 0;     
}