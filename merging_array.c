#include<stdio.h>
int main()
{
    int a[7],b[7],c[14],i,j,k;
    for(i=0;i<7;i++)
     {
        printf("Enter the elements of array a: ");
        scanf("%d",&a[i]);
     }
    for(j=0;j<7;j++)
     {
        printf("Enter the elements of array b: ");
        scanf("%d",&b[j]);
     }

    for(i=0;i<7;i++)
     {
        c[i]=a[i];
     }
    for(j=0;j<7;j++)
     {
        c[7+j]=b[j];
     }
    for(k=0;k<14;k++)
     {
        printf("%d\n",c[k]);
     }
}