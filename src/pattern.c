#include<stdio.h>
int main()
{
	int i,j,k;
	int num=1;

	
 
    // multiple of 3 = f , multiple of 5 = b , multiple of 3 and 5 = fb
    
    for(i=1;i<=50;i++)
{
	
	if(num%3==0 && num%5==0)
    {
    	printf("%s\t","fb");
	}
	
	
    else if(num%3==0)
    {
    	printf("%c\t",'f');
	}
	else if(num%5==0)
	{
	printf("%c\t",'b');	
	}
	
	else{
		printf("%d\t",num);
		
	}
	num++;
}
    
    
     
    
	
	return 0;
}
