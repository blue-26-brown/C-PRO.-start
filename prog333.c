#include<stdio.h>

int main()
{
	int n,first,last;
	
	   printf("Enter the number:");
	   scanf("%d",&n);
	   
	   last = n % 10;
	do{
		first= n%10;
		n= n/10;
	}
	while(n != 0);
	    
	    printf("The sum of the 2 numbers:%d",first+last);
}