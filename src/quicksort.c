// QUICK SORT ALGORITHM 

void partition(int a[],int m,int p)
{
	
	int v,i,j;
	
	v=a[m];
	i=m;
	j=p;
	
	do
{
		do{
		      i=i+1;	
		}
		while(a[i]>=v);
		
		do{
			j=j-1;
		}
		while(a[j]<=v);
		
		if(i<j)
		{
			interchange(a,i,j);
		}
		
	
}
while(i>=j);
a[m]=a[j];
a[j]=v;
return j;

	
}


void interchange(int a[],int i,int j)
{
	int p;
	// echange a[i] with a[j];
	
	p=a[i];
	a[i]=a[j];
	a[j]=a;
		
}

void quicksort(int a[],int p , int q)
{
	
	if(p<q)
	{
		 int j=partition(a,p,q+1);
		
		quicksort(p,j-1);
		quicksort(j+1,q);
	}
	
}


void main()
{
	
	int i,j,item,n,a[10],k;
	
printf("Enter the number of elemets :");
scanf("%d",&n);

printf("Enter the elements in the array;");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);

quicksort(p,q);


printf("\n");
	printf("the  sorted array is:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
