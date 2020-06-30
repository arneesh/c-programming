#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node *next;
};

typedef struct node node;
node *head=NULL;


void sort()
{
    node *h = head, *i, *j, *next_i;
    for(i = h; i!=NULL && i->next!=NULL; i=i->next)
    {
        node *min;
        min = i;
        for(j = i->next; j!=NULL ; j=j->next)
        {
            if(j->data < min->data)
                min=j;
        }
        if(min!=i)
        {
            int temp;
            temp = min->data;
            min->data = i->data;
            i->data = temp;
        }
    }
    head = h;
}

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
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void main(){
int num=0;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    int loop=0;
    int ele=0;
    for(loop=0;loop<num;loop++) {
        printf("Enter element %d :",loop);
        scanf("%d",&ele);
        insert(ele);
    }
	
	printf("Entered elements into the linklist from head:\n");
	printLL();
	
	sort();
	
	printf("Sorted list:");
	printLL();
	
	
printf("\nEnter the number to be searched:");	
//----------------
	
int upper=sizeOfLL()-1;
int lower=0;

int i,mid,search,ans=-1;

scanf("%d",&search);

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
printf("\n");
printf("The number we want to find is at position :\n");
printf("\nAns = %d",ans);	
}




