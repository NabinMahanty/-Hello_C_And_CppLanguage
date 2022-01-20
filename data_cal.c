#include <stdio.h>
int main()
{
	float w, kw, Hp;//(us)
	int choice;
	printf("\n\t1. Convert Watts to Kilowatts\t\t|\t\t4.Convert Kilowatts to Watts\n ");
	printf("\n\t2. Convert Watts to Horsepower\t\t|\t\t5.Convert Kilowatts to Horsepower\n ");
	printf("\n\t3. Convert Horsepower to Watts\t\t|\t\t6. Convert Horsepower to kilowatts\n ");
	
	printf("\n\tEnter Your Choice: ");
 scanf("%d",&choice);
 switch (choice)
 {
 	case 1:
 		printf("\n\tEnter the value in Watts: ");
 		scanf("%f",&w);
 		kw = w/1000;
 		printf("\tThe value in Kilowatts = %g",kw);
 	break;
 	
 	case 2:
 	    printf("\n\tEnter the value in Watts: ");
 		scanf("%f",&w);
 		Hp = w/746;
 		printf("\tThe value in Horsepower = %g",Hp);
 	break;
 	
 	case 3:
 	    printf("\n\tEnter the value in Horsepower: ");
 		scanf("%f",&Hp);
 		w = Hp*746;
 		printf("\tThe value in Watts = %g",w);
 	break;
 	
 	
 	case 6:
 	    printf("\n\tEnter the value in Horsepower: ");
 		scanf("%f",&Hp);
 		kw = Hp/1.341;
 		printf("\tThe value in Kilowatts = %g",kw);
 	break;
 	
 	case 4:
 	    printf("\n\tEnter the value in Kilowatts: ");
 		scanf("%f",&kw);
 		w = kw*1000;
 		printf("\tThe value in Watts = %g",w);
 	break;
 	
 	case 5:
 	    printf("\n\tEnter the value in Kilowatts: ");
 		scanf("%f",&kw);
 		Hp= kw*1.341;
 		printf("\tThe value in Watts = %g",Hp);
 	break;
 	
 	default:
 	 	printf("\n\tInvalid Choice !!!\n\n");
		  	
     }
     
     printf("\n\t\t\t\tN\tA\tB\tI\tN");
}
