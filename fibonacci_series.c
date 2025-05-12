#include<stdio.h>
int main()
{
    int n,i,sum=0,a=0,b=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("\nFibonacci series: ");
    for(i=1;i<=n-2;i++)
     {
       if(i==1)
        {
            printf("%d,",a);
        }
       else if(i==2)
        {
            printf("%d,",b);
        }
       sum=a+b;
       a=b;
       b=sum;

       printf("%d,",sum);
     }
}