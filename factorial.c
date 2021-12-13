#include <stdio.h>
int main()
{
	int num, i, sum = 1;
	
	printf("Enter a  positive integer: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;++i)
	{
		sum *= i;
	}
	
	printf("sum = %d",sum);
	
}
