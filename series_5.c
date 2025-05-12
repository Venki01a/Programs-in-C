#include<stdio.h>
int main()
{
    int n;
    int i;
    int c=1;
    printf("Enter no. of steps: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
     {
        c=c*i;
        printf("%d\t",c);
     }
}




