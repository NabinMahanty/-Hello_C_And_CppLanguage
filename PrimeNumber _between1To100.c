#include <stdio.h>
int main()
{
	int i,n=1;
	for(n=1;n<=100;n++)
	{
		i = 2;
		for(i=2; i<n;i++)
		{
			if(n%i==0)
			break;
		}
		if(i==n)
		printf("%d\t",n);
	}
	return 0;
}
