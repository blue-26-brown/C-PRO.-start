#include<stdio.h>

int main()
{
	int n,c=0;
	
	    printf("Enter the humber:");
	    scanf("%d",&n);
	do{
		n=n/10;
		c++;
	}
	while(n != 0);
	
	    printf("Total number of digits:%d",c);
	
}