#include <stdio.h>
int main()
{
	int a1,a2,a3,check;
	printf("Ente the first angle: ");
	scanf("%d",&a1);
	printf("Ente the second angle: ");
	scanf("%d",&a2);
	printf("Ente the third angle: ");
	scanf("%d",&a3);
	check = a1+a2+a3;
	if (check==180)
	{
		printf("This is a Valid triangle");
	}
	else 
	printf("Invalid triangle");
	return 0;
}
