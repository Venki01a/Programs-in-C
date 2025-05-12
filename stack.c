#include <stdio.h>
int stack[100];
int n=0;
int item;
int i=0;
int Top=-1;
int j;
void push(int Top,int item)
 {
   int k;
   if(Top==k-1)
    {
        printf("Stack is full");
    }
   else
    {
        printf("%d\n",Top);
        stack[Top]=item;
        printf("%d store  in stack\n",stack[Top]);
    }
}
void pop(int Top)
{
    if(Top<0)
     {
        printf("Stack is empty\n");
     }
    else
     {
        stack[Top]=0;
        Top=Top-1;
     }
}
void traverse(int Top)
{
    for(j=Top;j>=0;j--)
     {
        printf("%d\n",stack[j]);
     }
}
   
int main()
{
    int k;
    printf("Enter the elements stored in stack: ");
    scanf("%d",&k);
    while (i<k)
    {
        printf("Enter 1 for push,2 for pop,3 for traverse and other for exit:\n ");
        scanf("%d", &n);
        if(n==1)
         {
            printf("ELement to store: ");
            scanf("%d",&item);
            Top=Top+1;
            push(Top,item);
         }
        else if(n==2)
         {
            pop(Top);
         }
        else if(n==3)
         {
             printf("Traverse start\n");
             traverse(Top);
         }
        else
         {
            break;
         }
        i++;
    }
    

}
