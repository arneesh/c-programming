// Linear search

#include<stdio.h>
int main()
{
	int i,j,k,n,element;
	int arr[10],flag=0;
	
	printf("Enter number of element sin array:\n");
	scanf("%d",&n);
	printf("Enter elements in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	// SEARCHING ALGORITHM
	
	printf("Enter the element to b found:\n");
	scanf("%d",&element);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
		
	    flag=1;
	    break;
	}
}

if(flag==1)
{printf("Emenet found");

}
else
printf("Element not found:\n");	
      
	
	
	
	
	
	return 0;
}
