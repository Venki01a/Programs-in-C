#include<stdio.h>
int main()
{
    int n,a[100],k,l,m,u,F,i;
    printf("Enter total no. of elements of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        printf("Enter elements of array of index a[%d]: ",i);
        scanf("%d",&a[i]);
     }
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    l=0;
    u=n-1;
    while(l<=u)
     {
        m=(l+u)/2;
        if(a[m]==k)
         {
            F=1;
            break;
         }
        else if(a[m]>k)
         {
            u=m-1;
         }
        else
         {
            l=m+1;
         }
     }
    if(F==1)
     {
        printf("Element found in index number %d",m);
     }
    else
     {
        printf("Element not found");
     }
    return 0;
}