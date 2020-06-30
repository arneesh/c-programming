#include<stdio.h>
int main() {
	int num,count=0;
	
	
	printf("Enter num: ");
	scanf("%d",&num);
	
	while(num/10 > 0) {
		count= count+1;
		num=num/10;
		
		
	}
	count++;
	printf("%d",count);
	return 0;
}
