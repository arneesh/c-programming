
// QUICK SORT ALGORITHM

#include<stdio.h>

int partition(int *a,int start,int end)
{
	
	int pivot=a[end];
	int parindex=start;
	int i,temp1;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			
			temp1=a[i];
			a[i]=a[parindex];
			
			a[parindex]=temp1;
		//	swap(a[i],a[parindex]);
			parindex++;
		}
		
		
	}
	int temp2;
	temp2=a[parindex];
	a[parindex]=a[end];
	a[end]=temp2;
	
//	swap(a[parindex],a[end]);
	return parindex;
}

void quicksort(int *a,int start,int end)
{
	if(start<end)
	{
		int parindex=partition(a,start,end);
		quicksort(a,start,parindex-1);
		quicksort(a,parindex+1,end);
		}
}

int main()
{
	int a[]={7,0,5,-9,3,-2,1,0};
	int i;
	quicksort(a,0,7);
	
	for(i=0;i<8;i++)
printf("%d",a[i]);
}






















