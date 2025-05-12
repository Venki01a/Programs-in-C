#include<stdio.h>
int main()
{
    int n,arm=0,rem,a;
    a=n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
     {
        rem=n%10;
        arm=arm + (rem*rem*rem);
        n=n/10;
     }
    if(arm==a)
     {
        printf("Given number is Armstong number");
     }
    else
     {
        printf("Given number is not Armstong number");
     }
}