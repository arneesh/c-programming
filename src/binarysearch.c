// BINARY SEARCH

#include<stdio.h>
int main()
{
	
	int i=0,j,k;
	int arr[10],lower,upper,mid,n;
	int search;
	
	printf("Enter the numbe rof elements:\n");
	scanf("%d",&n);
	
	printf("Enter the values in the array:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
printf("Enter the value to be searched:");
scanf("%d",&search);

upper=n;
lower=0;
while(i!=n)
{i++;

if(upper<lower)
mid=lower + (upper-lower)/2;
printf("Value to be search dosent not exist in the array");
break;

if(arr[mid]==search);



if(arr[mid]<search)
lower=mid+1;

if(arr[mid]>search)
upper=mid-1;
}

if(arr[mid]==search)
printf("Number foundat location %d",mid);

return 0;
}




	
	

