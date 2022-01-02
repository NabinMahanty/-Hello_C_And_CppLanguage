#include <stdio.h>
int main()
{
	float p1,p2,v1,v2,l;
	printf("\nEnter the p1 value (hg cm): ");
	scanf("%f",&p1);
	printf("\nEnter the p2 value (hg cm): ");
	scanf("%f",&p2);
	printf("\nEnter the v1 value (litter): ");
	scanf("%f",&v1);
	printf("\nEnter the v2 value (litter): ");
	scanf("%f",&v2);
	if (p2==0)
	{
		printf("\nThe result of p2 = %.2f",(p1*v1)/v2);
	}
	else if (p1==0)
	{
		printf("\nThe result of p1 = %.2f",(p2*v2)/v1);
	}
	else if (v1==0)
	{
		printf("\nThe result of v1 = %.2f",(p2*v2)/p1);
	}
	else if (v2==0)
	{
		printf("\nThe result of v2 = %.2f",(p1*v1)/p2);
	}
	else 
	printf("\nError 404!!!");
	
	
	return 0;
}
