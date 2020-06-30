#include<stdio.h>

void main()
{
	
	int i,j,n,k,a[10],key;
	
	printf("Enter the number of elemnts:");
	scanf("%d",&n);
	
	printf("Eter the elemnts in the array ");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	
	printf("the sorted array is:");
	
	for(i=1;i<n;i++)
	{
		key=a[i];
		
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>a[j+1])
			{
				a[j+1]=a[j];
				
			}
		}
		a[j+1]=key;
	}
for(k=0;k<n;k++)	
printf("%d",a[k])	;
	
	
}


