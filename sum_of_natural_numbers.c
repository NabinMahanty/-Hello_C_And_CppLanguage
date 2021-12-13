#include <stdio.h>
int main()
{
	int num, i, sum = 0;
	
	printf("Enter a  positive integer: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;++i)
	{
		sum += i;
	}
	
	printf("sum = %d",sum);
	
}
