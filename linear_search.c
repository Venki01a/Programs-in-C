#include<stdio.h>
int main()
{
    int n,a[100],k,F=0,i,c=0;
    printf("Enter total no. of elements of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
        printf("Enter elements of array of index a[%d]: ",i);
        scanf("%d",&a[i]);
     }
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
     {
        if (a[i]==k)
         {
            F=1;
            printf("\nElement found in index %d",i);
            c++;
         }
     }
    if(F==1)
     {
        printf("\nElement have found %d times",c);
     }
    else
     {
        printf("\nElement not found");
     }
}