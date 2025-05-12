#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k;
    for(i=0;i<5;i++)
     {
        printf("Enter the elements of array a: ");
        scanf("%d",&a[i]);
     }
    for(j=0;j<5;j++)
     {
        printf("Enter the elements of array b: ");
        scanf("%d",&b[j]);
     }

    for(i=0;i<5;i++)
     {
        c[i]=a[4-i];
     }
    for(j=0;j<5;j++)
     {
        c[j]=b[4-j];
     }
    for(k=0;k<10;k++)
     {
        printf("%d\n",c[10-k]);
     }
}