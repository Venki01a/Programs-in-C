#include<stdio.h>
int main()
{
    int english,maths,hindi,science;
    printf("Enter the marks of english: ");
    scanf("%d",&english);
    printf("Enter the marks of maths: ");
    scanf("%d",&maths);
    printf("Enter the marks of hindi: ");
    scanf("%d",&hindi);
    printf("Enter the marks of science: ");
    scanf("%d",&science);
    if(english>30 && maths>30 && hindi>30 && science)
     {
        printf("Pass");
     }
    else
     {
        printf("Fail");
     }



}