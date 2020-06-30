#include<stdio.h>

void main()
{
	float w[10],p[10],r[10],m;
	// m = capacity
	int n;
	int i,j;
	
	
	
	printf("Enter the number of objects:");
	scanf("%d",&n);
		
	printf("Enter the weights :");

	for(i=0;i<n;i++)
	scanf("%f",&w[i]);
	
	printf("Enter the profits for the subsequent objects:");
	for(i=0;i<n;i++)
	scanf("%f",&p[i]);
	
	printf("Enter the total capacity:");
	scanf("%f",&m);
	
	
	// RATIO ARRAY
	
	for(i=0;i<n;i++)
	r[i]=p[i]/w[i];
	
	
	
	printf("The ratio is:");
	for(i=0;i<n;i++)
	printf("%d",r[i]);


}
