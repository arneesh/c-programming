#include<stdio.h>

int main()
{
	
int i,j,item,n,a[10],k;
	
printf("Enter the number of elemets :");
scanf("%d",&n);

printf("Enter the elements in the array;");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

printf("The sorted array is:");

for(j=2;j<=n;j++)
	{
		item=a[j];
		i=j-1;
		
		while((i>=1) && (item<a[i]))
		{
			
			a[i+1]=a[i];
			i=i-1;
		}
	a[i+1]=item;	
	}
	
for(k=1;k<=n;k++)	
printf("%d",a[i])	;
	
	
	
	return 0;
	
	
	
}




















