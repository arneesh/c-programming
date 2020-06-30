#include<stdio.h>

int a[10];



void maxmin(i,j,max,min)
{
	if(i=j)
	{
		max=min=a[i];		
	}
	else if(i=j-1)
	{
		if(a[i]<a[j])
		{
			max=a[j];
			min=a[i];
		}
		else
		{
			max=a[i];
			min=a[j];
		}		
	}
	else
	{
		int mid=(i+j)/2;
int min1=0,max1=0;
       maxmin(i,mid,max,min);
       maxmin(mid+1,j,max1,min1);

     if(max<max1)
     max=max1;
     
     if(min>min1)
     min=min1;
     
    }
		
}


int main()
{
	int i,j,n;
	

	
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	
	printf("Enter the array:\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	int max,min;
	
	printf("the  unsorted array is:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	printf("\n");
	printf("\n");
	
	maxmin(i,j,max,min);
	
	printf("%d\n",max);
	printf("%d",min);
	
	
	return 0;
}


























