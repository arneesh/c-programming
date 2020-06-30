#include<stdio.h>
#include<stdlib.h>
# define max_size 101

int a[max_size];
int top =-1;

void push(int x)
{
	if(top==max_size -1)
	{
		printf("Oveflow");
		return;
	}
	top++;
	a[top]=x;
	
}

void pop()
{
	if(top== -1)
	{
		printf("Underdflow");
		return;
	}
	top--;
}

int topp()
{
	return a[top];
	
}

void print()
{
	int i;
	printf("Stack: ");
	for(i=0;i<=top;i++)
	printf("%d ",a[i]);
	printf("\n");
}



int main()
{
	push(2);
	print();
	push(5);
	print();
	push(10);
	print();
	pop();
	print();
	push(12);
	print();


	
	
	
	return 0;
}

