
#include<stdio.h>

void main()
{
	
	int i,j,n,k,a[10],key,temp;
	
	printf("Enter the number of elemnts:");
	scanf("%d",&n);
	
	printf("Eter the elemnts in the array ");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	
	printf("the sorted array is:");
	
	for(i=2;i<=n;i++)
	{
		j=i;
		while(a[j]<a[j-1])
		{
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		j=j-1;	
		}
	}
for(k=0;k<n;k++)	
printf("%d",a[k])	;
	
	
}


