#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a%97==0)
     {
        printf("Entered number is divisible by 97");
     }
    else
     {
        printf("Entered number is not divisible by 97");
     }
}