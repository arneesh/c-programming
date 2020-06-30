#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	
	int data;
	struct node* next;
}node;

struct node* head;



void insert(int x)
{
 struct node* temp = (node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;


head=temp;

}

void print()
{
	struct node* temp = head;
	printf("The list is : ");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}



int main()
{
	head=NULL;
	// EMPTY LIST;
	int n,i,x,j;
	printf("Enter the number of intergers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	printf("ENter the number:\n");
	
	scanf("%d",&x);
	
	insert(x);
	print();
   }
   
   return 0;
} 

