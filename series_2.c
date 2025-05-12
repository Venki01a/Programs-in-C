#include<stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter no. of steps: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
     {
        printf("%d\t",i);
     }
    return 0;
}