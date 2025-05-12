#include<stdio.h>
int main()
{
    int n,rev=0,rem,a;
    a=n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
     {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
     }
    if(rev==a)
     {
        printf("Given number is pallindrome");
     }
    else
     {
        printf("Given number is not pallindrome");
     }
}