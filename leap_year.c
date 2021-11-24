#include<stdio.h>
int main()
{
	int i;
	printf("Enter the year:-");
	scanf("%d",&i);
	if ((i%4==0)&&(i%100!=0)||(i%400==0))
	{
		printf("This is leap year:%d",i);
	}
	else
	{
		printf("This is not leap year:%d",i);
	}
}
