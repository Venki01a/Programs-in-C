#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter a value:");
    scanf("%d",&n);


    for(i=0;i<n;i++)
     {
        for(j=0;j<2*(n-i)-1;j++)
         {
            printf(" ");
         }
    for(k=0;k<=i;k++)
     {
        printf("* ");
     }
     printf("\n");
     }
}