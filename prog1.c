#include<stdio.h>

int main()
{
	float c,f;
	
	printf("enter the temperature:");
	scanf("%f",&c);
	
	f = (9.0/5.0)*c+32;
	
	printf("temperacture in f =%.2f",f);
}