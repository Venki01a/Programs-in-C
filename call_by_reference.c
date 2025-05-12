#include<stdio.h>
void swap(int i,int j)
{
    int c=i;
    i=j;
    j=c;
}

void main()
{
    int i,j;
    printf("Enter the values: ");
    scanf("%d%d",&i,&j);
    printf("Value of i,j before swapping is %d,%d",i,j);
    swap(i,j);
    printf("Value of i,j after swapping is %d,%d",i,j);
}