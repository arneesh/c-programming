#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};

typedef struct node node;
node *head=NULL;


void insert(int x)
{
 struct node* temp = (node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
head=temp;
}

int sizeOfLL(){
	
	struct node* temp = head;
	int count = 0;
	while(temp != NULL)
	{
		temp=temp->next;
		count++;
	}
	return count;
}

int findAt(int n){
	
	struct node* temp = head;
	int i = 0;
	for(i=0;i<n;i++){
		temp=temp->next;
		if(temp == NULL){
			return -1;
		}
	}
    return temp->data;
}

void printLL()
{
	struct node* temp = head;
//	printf("The list is : ");
	while(temp != NULL)
	{
		printf("%d ",&temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void main(){
	
	insert(8);
	insert(7);
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	
	printLL();
	
	
int upper=sizeOfLL()-1;
int lower=0;

int i,mid,search,ans=-1;

scanf("%d",&search);

while(lower <= upper){
	
mid=(upper+lower)/2;

int temp = findAt(mid);

if(temp==search){
	ans = mid;
	break;
}


if(temp>search){
    upper=mid-1;
}

if(temp<search)
    lower=mid+1;
}
printf("\nAns = %d",ans);	

//--------POINT-----

int *arr,n = sizeOfLL();
arr = (int *)malloc(n*sizeof(int));

struct node* temp = head;

i = 0;

while(temp != NULL){
	arr[i] = (int)&temp->data;
	temp=temp->next;
	i++;
}


upper=n-1;
lower=0;

while(lower <= upper){

mid=(upper+lower)/2;

int *temp = (int *)arr[mid];

if(temp[0]==search){
	ans = mid;
	break;
};

if(temp[0]<search)
lower=mid+1;

if(temp[0]>search)
upper=mid-1;

}
printf("\nAns = %d",ans);	
}




