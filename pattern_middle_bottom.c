#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a value:");
    scanf("%d",&n);


    for(i=n;i>=1;i--)
     {
        for(j=(n-i);j>=1;j--)
         {
            printf(" ");
         }
    for(k=n;k>=1;k--)
     {
        printf("* ");
     }
     printf("\n");
     }
}