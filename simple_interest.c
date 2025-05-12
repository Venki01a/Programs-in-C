#include<stdio.h>
int main()
{
    int principle,time;
    float rate,si;
    printf("Enter the principle:");
    scanf("%d",&principle);
    printf("Enter the rate:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%d",&time);
    si=(principle*rate*time)/100;
    printf("Simple interest of given values is %f",si);
}