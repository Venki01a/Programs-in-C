#include<stdio.h>
int main()
{
    int n,i,f;
    printf("Enter the number: ");
    scanf("%d",&n);
    f=1;
    for(i=2;i<n;i++)
     {
       if(n%i==0)
        {
            f=0;
            break;
        }
     }
    if(f==1)
        {
            printf("NO. is prime number");
        }
    else
        {
            printf("NO. is not prime number");
        } 
}