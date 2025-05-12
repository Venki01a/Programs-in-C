#include<stdio.h>
int main()
{
    int radius,height,volume;
    printf("Enter the radius of cylinder: ");
    scanf("%d",&radius);
    printf("Enter the height of cylinder: ");
    scanf("%d",&height);
    volume= 3.14*radius*radius*height;
    printf("volume of cylinder of radius %d and height %d is %d",radius,height,volume);
}