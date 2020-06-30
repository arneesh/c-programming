#include<stdio.h>
#include<stdlib.h>

struct node
   {
	int data;
	struct node* link;
	}	
	
	
	struct node* a;
	a=null;
	printf("Empty");

struct node* temp=	(node)malloc(size(node))

/*
(*temp).data=2;
(*temp).link=null;
*/
temp->data=2;
temp->link=null;

a=temp;

temp=(node)malloc(size(node));
temp->data=4;
temp->link=null;

// TRAVERSAL

node* temp1 =a;
while(temp1->link !=null)
{
	temp1=temp1->link;
	printf("%d",temp->data);
}

temp1->link=temp;


