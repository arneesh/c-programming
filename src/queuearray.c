#include<stdio.h>
#include<stdlib.h>

# define max 5

int a[max];


int  front = -1;
int rear = -1;

// for empty queue
/*
void isempty()
{
	
	if (front==-1 && rear == -1)
	printf("The queue is empty");
	
	
}
*/

enqueue()
{
	int item;
	if(rear==max-1)
	printf("Overflow");
	
	else
	{
		if(front==-1)
		front=0;
		printf("Enter the element in the queue:");
		scanf("%d",&item);
		rear=rear+1;
		a[rear]=item;
	}
}

dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("QUEUE UNDERFLOW \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", a[front]);
        front = front + 1;
    }
} 


display()
{int i;
	if (front ==-1)
	printf("Queue is empty:");
	
	else{
		
		printf("The queue is:");
		for(i=front; i<=rear;i++)
		printf("%d ",a[i]);
		printf("\n");
	}
}


void main()
{
	
	printf("\t \tImplementation of  a queue\n");
	
	int choice;
	
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
		
		case 1:
			enqueue();
			break;
		case 2:
		    dequeue();
			break;
		case 3:
		    display();
			break;
		 case 4:
		    exit(1);
			break;
			default:
		
			printf("Wrong choicee");
		
	     }
		}
	}
		
	
	
	
	
	




