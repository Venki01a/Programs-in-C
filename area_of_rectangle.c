#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the breadth: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of rectangle of length %d and breadth %d is %d",length,breadth,area);
}