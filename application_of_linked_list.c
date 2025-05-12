#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],i,n;
    printf("Enter maximum power of equation: ");
    scanf("%d",&n);
    printf("Enter 1st equation in decreasing power: \n ");
    for(i=n;i>=0;i--)
     {
        printf("x ^ %d element coefficient: ",i);
        scanf("%d\n",&a[i]);
     }
    printf("Enter 2nd equation in decreasing power: \n");
    for(i=n;i>=0;i--)
     {
        printf("x ^ %d element coefficient: ",i);
        scanf("%d\n",&b[i]);
     }
    printf("1st Equation is \n");
    for(i=n;i>=0;i--)
     {
        printf("%dX^%d  \n",a[i],i);
     }
    printf("2nd Equation is \n");
    for(i=n;i>=0;i--)
     {
        printf("%dX^%d  \n",b[i],i);
     }
    printf("Addition of two equation is \n");
    for(i=n;i>=0;i--)
     {
        c[i]= a[i] + b[i];
        printf("%dX^%d  \n",c[i],i);
     }
}