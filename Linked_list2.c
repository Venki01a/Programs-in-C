#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{        
    int data;
    struct node *next;
};
struct node *first,*temp,*ttemp,*p,*r,*s,*q;
void create_first(int val)
{
    first=(struct node*)malloc(sizeof(struct node));
    first->data=val;first->next=NULL;
}
void addnodes(int val)
{
    temp = first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ttemp=(struct node*)malloc(sizeof(struct node));
    ttemp->data=val;
    ttemp->next=NULL;
    temp->next=ttemp;
}
void display(){
    temp =first;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void sum(){
    temp= first;
    int s = 0;
    while(temp!=NULL){
        s=s+temp->data;
        temp=temp->next;
    }
    printf("\n sum is %d",s);
}
void addafter(int x,int y){
	temp=first;
	while(temp->data!=x){
		temp=temp->next;
	}
	ttemp=temp->next;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=y;
	p->next=ttemp;
	temp->next=p;
}
void addbefore(int x, int y){
	ttemp=temp=first;
	while(temp->data!=x){
		ttemp=temp;
		temp=temp->next;
	}
	
		p=(struct node*)malloc(sizeof(struct node));
		p->data=y;
		p->next=temp;
		ttemp->next=p;
}
void delnodeafter(int x, int y){
	temp=first;
	while(temp->data!=x){
		temp=temp->next;
		
	}
	ttemp=temp->next;
	p=ttemp->next;
	temp->next=p;
	ttemp->next=NULL;
	free(ttemp);
}
void delnodebefore(int x, int y){
	temp=first ;
	while(temp->next->data!=x){
		ttemp=temp;
		temp=temp->next;
	}
	p=temp->next;
	ttemp->next=p;
	temp->next=NULL;
	free(temp);
	
}
void add_newnode_before_first(int x){
	temp=(struct node*)malloc(sizeof(struct node));
    {
	temp->data=x;
	temp->next=first;
	first=temp;
    }    }
void delete_first_node(){
	temp=first;
	first=first->next;
	temp->next=NULL;
	free(temp);
}
void delete_lastnode(){
	temp=first;
	while(temp->next!=NULL){
		ttemp=temp;
		temp=temp->next;
	}
	ttemp->next=NULL;
	free(temp);
} 
void swap_mn_singly(int x,int y){
	int i,j;
	temp=first;
	i=1;
	while(i<x){
		p=temp;
		temp=temp->next;
		i++;
	}
	q=temp->next;
	ttemp=first;
	j=1;
	while(j<y){
		r=ttemp;
		ttemp=ttemp->next;
		j++;
	}
	s=ttemp->next;
	p->next=ttemp;
	ttemp->next=q;
	r->next=temp;
	temp->next=s;
}
int main(){
	int n, m;char i;
	printf("\nEnter data for first node:");
	scanf("%d",&n);
	create_first(n);
	printf("\nFirst Node Created :\n");
	
	while(1){
		printf("\nDo you want to continue:");
		scanf(" %c",&i);
		if(i=='n'||i=='N')
		break;
		printf("\nEnter data for new node :");
		scanf("%d", &n);
		addnodes(n);
	}
	printf("\n This is your final list:");
	display();
	sum();
	printf("\n Enter data after which u want to add new node:");
	scanf("%d",&n);
	printf("\nenter data for new node");
	scanf("%d",&m);
	addafter(n,m);
	printf("\nnow list is \n");
	display();
	printf("\n enter data before which u want to add");
	scanf("%d",&n);
	printf("\n enter data for new node");
	scanf("%d",&m);
	addafter(n,m);
	printf("\nnow list is \n");
	display();
	printf("\nEnter data after which u want to delete a node:");
	scanf("%d",&n);
	delnodeafter(n,m);
	display();
	printf("\nenter data before which you want to delete a node");
	delnodebefore(n,m);
	display();
	printf("\nEnter the node no for two nodes that you want to swap:");
	scanf("%d %d",&n,&m);
	swap_mn_singly(n,m);
	display();
}