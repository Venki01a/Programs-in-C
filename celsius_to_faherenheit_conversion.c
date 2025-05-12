#include<stdio.h>
int main()
{
    int celsius,faherenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%d",&celsius);
    faherenheit= (9/5)*celsius + 32;
    printf("Temperature in faherenheit is %d",faherenheit);
}