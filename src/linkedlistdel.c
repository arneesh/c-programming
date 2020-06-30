#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
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

void delete(int n)
{
	struct node* temp1=head;
	
	if(n==1)
	{
	head=temp1->next;
	
	free (temp1);
	return;
    }
	int i;
	for(i=0;i<=n-2;i++)
	temp1=temp1->next;
	
	struct node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	
	
}




int main()
{
	head=NULL;
	insert(2,1);
	insert(4,2);
	insert(6,3);
	insert(5,4);
	print();
	int n;
	printf("Enter the position:\t");
	scanf("%d",&n);
	delete(n);
	print();
	
	return 0;
}


