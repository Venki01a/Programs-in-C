#include<stdio.h>
void c(int m,int n,int table)
{
    if(m<=10)
     {
        table=m*n;
        printf("%d\n",table);
        m++;
        c(m,n,table);
     }
}




int main()
{
    int n,m,table;
    printf("Enter the value of n:");
    scanf("%d",&n);
    c(1,n,table);
}