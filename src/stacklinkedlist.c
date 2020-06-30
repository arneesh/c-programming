#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	int data;
	struct node* link;
	
}node;

struct node* top =NULL;

void push(int x)
{
	node* temp = (node*)malloc(sizeof(node*));
	
	temp->data=x;
	temp->link=top;
	top=temp;

void pop()
{
	node* temp;
	if(top==NULL)
	return;
	temp=top;
	top=top->link;
	free(temp);
	
	
}
