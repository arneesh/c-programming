
#include<stdio.h>

void main()
{
	
	int i,j,n,k,a[10],key,temp;
	
	printf("Enter the number of elemnts:");
	scanf("%d",&n);
	
	printf("Eter the elemnts in the array ");
	
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	
	
	
	printf("the sorted array is:");
	
	for(j=2;j<=n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>0 && key<a[i])
		{
			a[i+1]=a[i];
			j=i-1;
		}
		a[i+1]=key;
	}
	
	
	
	
for(k=1;k<=n;k++)	
printf("%d",a[k])	;
	
	
}


