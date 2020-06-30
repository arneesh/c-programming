#include<stdio.h>
int main()
{
	// sum of n natural numbers
	
	int i,j,k,sum=1,num;
	
	printf("Enter the range of natural numers");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
	  	sum=sum*i;
	  	
	}
	
	printf("%d",sum);
	return 0;
}
