#include<stdio.h>

int main()
{
	float fa,sa,ffa;
	
	printf("Eneter the first angle:");
	scanf("%f",&fa);
	printf("Eneter the second angle:");
	scanf("%f",&sa);
	
	ffa=180-fa-sa;
	
	printf("Third angle=%.2f",ffa);
	
}