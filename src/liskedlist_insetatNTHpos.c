#include<stdio.h>
#include<stdlib.h>

typedef struct node{

   int data;
   struct node* next;
}node;

struct node* head;

void insert(int data,int n)
{int i=0;
	struct node* temp1 = (node*)malloc(sizeof(struct node));
	 temp1->data=data;
	 temp1->next=NULL;
	 if(n==1)
	 {
	 	temp1->next=head;
	 	head=temp1;
	 	return;
	 }
  struct	node* temp2= head;
	 for(i=0;i<n-2;i++)
	 {
	 	temp2=temp2->next;
	 }
	 temp1->next=temp2->next;
	 temp2->next=temp1	;
	
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
	head=NULL; // EMPTY LIST
	
	insert(2,1); // LIST 2
    insert(3,2); // LIST 2,3
	insert(4,1); // LIST 4 2 3
	insert(5,2); // LIST 4 5 2 3
	print();
	
	
	
	
return 0;
	
}



