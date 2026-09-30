#include<stdio.h>

int main()
{
	float bsalary,hrap,dap,tap;
	float gsalary,hra,da,ta;
	
	printf("Enter the bsalary:");
	scanf("%f",&bsalary);
	
	printf("Enter the hrap:");
	scanf("%f",&hrap);
	
	printf("Enter the dap:");
	scanf("%f",&dap);
	
	printf("Enter the tap:");
	scanf("%f",&tap);
	
	hra=bsalary*hrap/100;
	da=bsalary*dap/100;
	ta=bsalary*tap/100;
	gsalary=bsalary+hra+da+ta;
	
	printf("\nHra=%.2f",hra);
	printf("\nDa=%.2f",da);
	printf("\nTa=%.2f",ta);
	printf("\nGross Salary=%.2f",gsalary);
	
	
}