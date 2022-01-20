#include <stdio.h>

int main()
{
float cl , fh, k;
int choice;

printf("\n1: Convert temperature from Fahrenheit to Celsius.");
printf("\n2: Convert temperature from Celsius to Faharenheit.");
printf("\n3: Convert temperature from Celsius to Kelvin.");
printf("\n4: convert temperature from kelven to celsius.");
printf("\n5: convert temperature from Fahrenheit to kelvin.");
printf("\n6: convert temperature from Kelvin to Fahrenheit.");


printf("\nEnter your choice (1,2,3,4,5,6)\n");
scanf("%d",&choice);

 if(choice ==1)
 	{
	 
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
    }
else if(choice==2)
	{
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
else if(choice==3)
 {
	printf("\nEnter temperature in celsius: ");
	scanf("%f",&cl);
	k= (cl+273.15);
	printf("Temperature in Kelvin: %.2f",k);
 }
else if (choice==4)
 {
 	printf("/nEnter temperature in kelvin: ");
 	scanf("%f",&k);
 	cl= (k-273.15);
 	printf("Temperature in celsius: %.2f",cl);
 }
else if (choice==5)
 {
 	printf("\nEnter temperature in Fahrenheit: ");
	scanf("%f",&fh);
	k= ((fh+ 459.67)*5/9) ;
	printf("Temperature in Kelvin: %.2f",k);
 }
else if (choice==6)
 {
 	printf("/nEnter temperature in kelvin: ");
 	scanf("%f",&k);
 	fh= ((k*1.8)-459.67);
 	printf("Temperature in celsius: %.2f",fh);
 }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}
