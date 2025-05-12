#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int info;
    struct NODE *link;
    struct NODE *previous_link;
};
void deleteStart(struct NODE**head)
{
    struct NODE *temp= *head;
    if(*head==NULL)
     {
        printf("Linked list is empty");
        return;
     }
    *head=(*head)->link;
    //*link=(*link)->previous_link;
    printf("%d is deleted\n",temp->info);
}
void insertStart(struct NODE**head,int info)
{
    struct NODE *newNODE = (struct NODE *) malloc(sizeof(struct  NODE));
    newNODE->info=info;
    newNODE->link=*head;
    newNODE->previous_node=*link;
    *head = newNODE;
    printf("%d is inserted \n",newNODE->info);
}
void display(struct NODE node)
{
    printf("\nLinked list\n");
    while(node!= NULL)
     {
        printf("%d\n",node->info);
        node=node->link;
     }
    printf("\n");
}

int main()
{
    struct Node *head= NULL;
    int n,item;
    n=0;
    while(n!=4)
    {
        printf("\nEnter 1 for insert ,2 for display , 3 for delete ,4 for exit:\n");
        scanf("%d",&n);
        if(n==1)
         {
            printf("Enter element to store: ");
            scanf("%d",&item);
            insertStart(&head,item);
         }
        else if(n==2)
         {
            display(head);
         }
        else if(n==3)
         {
           // deleteStart(&head);
            
         }
        else
         {
            printf("You are exit from linked list\n");
            n=4;
         }
    }
}