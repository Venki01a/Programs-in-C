#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=1;i<=100;i++)
     {
        if(i%2!=0 && i%3!=0 && i%5!=0)
         {
           printf("%d\n",i);
           count++;
         }
     }
    printf("No of elements not divisible by 2,3,5 are %d",count);
}