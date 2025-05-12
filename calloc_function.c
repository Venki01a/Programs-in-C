#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Entered elements is %d\n",n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
     {
        printf("Memory not allocated");
     }
    else
     {
        printf("Memory successfuly allocated using calloc.\n");
        for(i=0;i<n;i++)
         {
            ptr[i]=i+1;
         }
        printf("The elements of array are: ");
        for(i=0;i<n;i++)
         {
            printf("%d\n",ptr[i]);
         }
     }
}