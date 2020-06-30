 #include<stdio.h>
  int heapsize;
 
 
 void heapsort(int *arr,int len)
 
 {
   int i;
   build_heap(arr,len);
    for(i=len-1;i>=1;i--)
    {
        swap(&arr[0],&arr[i]);
        heapsize = heapsize -1;
        min_heapify(arr,0);
    }
 }
void min_heapify(int *arr,int i)
{
    int l=2*i,r=2*i+1,smallest;
    if(l<heapsize && arr[l]<arr[i])
        smallest = l;
    else
        smallest = i;
    if(r<heapsize && arr[r]<arr[smallest])
        smallest = r;

    if(smallest != i)
    {
        swap(&arr[i],&arr[smallest]);
        min_heapify(arr,smallest);
    }
     }
void build_heap(int *arr,int len)
{
    heapsize = len;
    int i;
    for(i =len/2;i>=0;i--)
    {
        min_heapify(arr,i);
    }
}
void swap(int *a ,int *b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}

    int main()
    {
            int *arr,n,i;
            printf("Enter no. of elements : ");
            scanf("%d",&n);
            arr=(int *)malloc(sizeof(int)*n);
            
            printf("Enter elements in the array  ");
            for(i=0;i<n;i++)
            {
             
             scanf("%d",&arr[i]);
            }
            //heapsize = n;
            heapsort(arr,n);
            printf("\nAfter heapsort \n");
            for(i=0;i<n;i++)
            {
                printf("%d  ",arr[i]);
            }
        return 0;
    }
