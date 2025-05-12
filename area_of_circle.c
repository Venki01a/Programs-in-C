#include<stdio.h>
int main()
{
    int radius,area;
    printf("Enter the radius of circle: ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("Area of circle of radius %d is %d",radius,area);
}