#include <stdio.h>
 
int arr[10];
 

 
int part(int arr[], int start, int end)
{
 int i, j, temp1,temp2, value;
 
 i = start - 1;
 
 for( j = start; j < end; j++)
 {
 if (arr[j] <= arr[end])
 {
 
 
 temp1 = arr[i];
 arr[i] = arr[j];
 arr[j] = temp1;
 i = i + 1;
 }
 }

 temp2 = arr[i+1];
 arr[i+1] = arr[end];
 arr[end] = temp2;
 
 value = i + 1;
 
 return value;
}
 
void QuickSort(int arr[], int start, int end)
{
 int mid;
 
 if (start < end)
 {
 mid = part(arr, start, end);
 QuickSort(arr, start, mid - 1);
 QuickSort(arr, mid, end);
 }
}
 
int main(void)
{
 int i,n;
 printf("enther the number of elements");
 scanf("%d",&n);
 printf("Enter the lements: \n");
 for (i = 0; i < n; i++)
 {
 scanf("%d",&arr[i]);
 }
 
 
 QuickSort(arr, 0, n - 1);
 
 printf("The sorted array is: \n");
 for (i = 0; i < n; i++)
 {
 printf("%d\t", arr[i]);
 }
 printf("\n");
 
 printf("Enter to exit the program\n");
 
 
 return 1;
}





