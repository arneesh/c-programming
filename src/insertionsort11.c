#include<stdio.h>
int main(){

  int i,j,n,key,a[20];

  printf("Enter the number of elements ");
  scanf("%d",&n);

  printf("Enter  %d elements: ",n);
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);

  for(i=1;i<n;i++){
      key=a[i];
      j=i-1;
      while((j>=0) && (key<a[j])){
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=key;
  }

  printf("The sorted array ");
  for(i=0;i<n;i++)
      printf(" %d",a[i]);

  return 0;
}
