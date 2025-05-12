#include<stdio.h>
int main()
{
    int a[10],i,n;
    for(i=0;i<10;i++)
     {
        printf("Enter elements of array: ");
        scanf("%d",&a[i]);
     }
    printf("Element of array of index number to be delete: ");
    scanf("%d",&n);

    for(i=n;i<9;i++)
     {
        a[i]=a[i+1];
     }
    a[9]=0;
    for(i=0;i<9;i++)
     {
        
        printf("\n%d",a[i]);
     }
    return 0;
}