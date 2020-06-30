#include<stdio.h>

void knapsack(int n, float *w, float *p, float m) {
   float x[50], totalprofit = 0;
   int i, j, u;
   u = m;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (w[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + p[i];
         u = u - w[i];
      }
   }
 
   if (i < n)
      x[i] = u / w[i];
 
   tp = tp + (x[i] * p[i]);
 
   printf("\Weights / weight fraction used ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);
 
   printf("\nMax rofit:- %f", tp);
 
}





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
	printf("%f\n",r[i]);

float temp;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(r[i]<r[j])
		{
		
	temp=r[j];
	r[j]=r[i];
	r[i]=temp;	
	
	
	temp=w[j];
	w[j]=w[i];
	w[i]=temp;
	
	temp=p[j];
	p[j]=p[i];
	p[i]=temp;
		
	}
	
	
}
}

printf("The sorted ratio is descending order is:");
int k;
for(k=0;k<n;k++)
printf("%f\n",r[k]);




knapsack(n, w, p, m);

}
