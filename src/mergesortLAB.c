#include<stdio.h>

int high,low,mid;
int a[10];
int b[10];
int k;

void mergesort(int,int);
void merge(int,int,int);
int main()
{
	int i,j,n;
	

	
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	
	;
	
	printf("Enter the array:\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	low=0;
	high=n-1;
	
	printf("the  unsorted array is:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	mergesort(low,high);
	
	
	
	printf("\n");
	printf("the  sorted array is:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	return 0;
}
	
void mergesort(int low,int high)
{

if(low<high)
   {
   	int mid=(low+high)/2;
   	
   	mergesort(low,mid);
   	mergesort(mid+1,high);
   	
   	merge(low,mid,high);
   	
    }
    
}	

void merge(int low,int mid,int high)
{
	int z=0;
	for(z=low;z<=high;z++) {
		b[z]=a[z];
	}
	int h=low;
	int i=low;
	int j=mid+1;
	
	while((h<=mid) && (j<=high))
	{
		if(b[h]<=b[j])
		{
			a[i]=b[h];
			h=h+1;
		}
		else
		{
			a[i]=b[j];
			j=j+1;
		}
		i=i+1;
	}
	if(j<high) {
	
	for(k=j;k<=high;k++)
	{
		a[i]=b[k];
		i=i+1;
	}
}
	else {
	
	for(k=h;k<=mid;k++)
	{
		a[i]=b[k];
		i=i+1;		
	}
}
	
	
	
}
	
	
	
	
























