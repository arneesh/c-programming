
#include<stdio.h>
int main()
{
	int i,j,k;
	
	int search,n, arr[10];
	
	
	printf("Enetert the number of elements in array");
	scanf("%d",&n);
	
	printf("Enter the array elements");
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int min;
	min=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	
	printf("Min is %d",min);
	
	
	
	
	
	
	
	return 0;
	
}
