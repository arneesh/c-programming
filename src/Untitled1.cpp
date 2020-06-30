#include<stdio.h>
int main()
{
	int i,j,k;
	int low ,high,mid,n,search;
	int arr[10];
	
	
	printf("Enter the lenth og array");
	scanf("%d",&n);
	
	printf("Enter the array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to be searched");
	scanf("%d",&search);
	
	low=0;
	high=n-1;
	mid=(low+high)/2;
	
	while(low<=high)
	{
		if(search==arr[mid])
         {
         	printf("Number found !");
         	break;
         	
		 }
		 
		 if(search<arr[mid])
		 {
		 	high=mid-1;
		 	mid=(high+low)/2;
		 	
		 }
		 
		 if (search>arr[mid])
		 {
		 	low=mid+1;
		 	mid=(high+low)/2;
		 	
				 }	
	printf("Number not found");			 	
	}
	
	
return 0;	
}













