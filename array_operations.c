#include<stdio.h>
int main()
{
    int n,a[100],b[100],c[100],d[100],e[100],i;
    printf("Enter the no.of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        printf("Enter elements of array a: ");
        scanf("%d",&a[i]);
     }
    for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
    printf("\n");

    for(i=0;i<n;i++)
     {
        printf("Enter elements of array b: ");
        scanf("%d",&b[i]);
     }
    for(i=0;i<n;i++)
     {
        printf("%d  ",b[i]);
     }
    printf("\n");
    for(i=0;i<n;i++)
     {
        c[i]=a[i]+b[i];
        d[i]=a[i]-b[i];
        e[i]=a[i]*b[i];
     }
    printf("Sum of two arrays is\n");
    for(i=0;i<n;i++)
     {
        printf("%d  ",c[i]);
     }
    printf("\n Difference of two arrays is\n");
    for(i=0;i<n;i++)
     {
        printf("%d\n",d[i]);
     }
    printf("Product of two arrays is\n");
    for(i=0;i<n;i++)
     {
        printf("%d\n",e[i]);
     }
}