#include<stdio.h>
#include<stdlib.h>

typedef struct node
{	
	int data;
	struct node* next;
}node;

// GLOBAL VARIABLE
struct node* head;
 // empty list

void insert(int x);
void print();



void insert(int x)
{
	struct node* temp = (node*)malloc(sizeof(node));
	temp->data =x;
	temp->next=head;
	
//	if(head !=NULL) temp->next=head;
	
	head=temp;
}

void print()
{
	
	struct node* temp=head;
	
	printf("The list is:");
	while(temp !=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
}




int main()
{
	head= NULL;
	
	printf("How mnay numbers?\n");
	int  n,i,x;
	
	scanf("%d",&n);

for(i=0;i<n;i++)
{
 printf("Enter the number \n");
 scanf("%d",&x);
 insert(x);
 print();
 	
	
}
return 0;	
}
