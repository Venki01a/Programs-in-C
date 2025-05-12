#include<stdio.h>
void c(int n)
{
    if(n>=1)
     {
        printf("%d\n",n);
        n--;
        c(n);
     }
}

int main()
{
    c(10);
}