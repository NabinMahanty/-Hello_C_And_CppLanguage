#include <stdio.h>
int main()
{
	float mm,M,cm,in,miles,feet;
	int choice;
	
 printf("\n\t1. Convert Millimeters to Meters\t\t|\t\t16.Convert Inches to Millimeters ");
 printf("\n\t2. Convert Millimeters to Centimeters\t\t|\t\t17.Convert Inches to Meters ");
 printf("\n\t3. Convert Millimeters to Inches\t\t|\t\t18.Convert Inches to Miles ");
 printf("\n\t4. Convert Millimeters to Miles \t\t|\t\t19.Convert Inches to Centimeters ");
 printf("\n\t5. Convert Millimeters to Feet\t\t\t|\t\t20.Convert Inches to Feet  ");
 printf("\n\t6. Convert Meters to Millimeters\t\t|\t\t21.Convert Miles to Millimeters   ");
 printf("\n\t7. Convert Meters to Centimeters\t\t|\t\t22.Convert Miles to Meters  "); 
 printf("\n\t8. Convert Meters to Inches\t\t\t|\t\t23.Convert Miles to Centimeters  ");
 printf("\n\t9. Convert Meters to Miles\t\t\t|\t\t24.Convert Miles to Inches  ");
 printf("\n\t10.Convert Meters to Feet\t\t\t|\t\t25.Convert Miles to Feet  ");
 printf("\n\t11.Convert Centimeters to Millimeters\t\t|\t\t26.Convert Feet to Millimeters  ");
 printf("\n\t12.Convert Centimeters to Meters\t\t|\t\t27.Convert Feet to Meters  ");
 printf("\n\t13.Convert Centimeters to Inches\t\t|\t\t28.Convert Feet to Centimeters  ");
 printf("\n\t14.Convert Centimeters to Miles\t\t\t|\t\t29.Convert Feet to Miles  ");
 printf("\n\t15.Convert Centimeters to Feet\t\t\t|\t\t30.Convert Feet to Inches\n\n ");
 
 printf("\n\tEnter Your Choice: ");
 scanf("%d",&choice);
 switch (choice)
 {
 	case 1:
 	 printf("\n\tEnter the value in MM: ");
 	 scanf("%f",&mm);
 	 M= mm/1000;
 	 printf("\tThe value in Meters = %g",M);
 	break;
 	
 	
 	case 2:
   	  printf("\n\tEnter the value in MM: ");
 	  scanf("%f",&mm);
   	  cm= mm/10;
      printf("\tThe value in Centimeters = %g",cm);
   	break;
   	
   	case 3:
    	printf("\n\tEnter the value in MM: ");
 	    scanf("%f",&mm);
 	    in= mm/25.4;
 	    printf("\tThe value in Inches = %g",in);
   	break;
   		
   	case 4:
   	   printf("\n\tEnter the value in MM: ");
 	   scanf("%f",&mm);
 	   miles= mm/1.609e+6;
 	   printf("\tThe value in Miles = %g",miles);
 	 break;
 	 
 	 case 5:
 	  printf("\n\tEnter the value in MM: ");
 	  scanf("%f",&mm);
 	  feet= mm/305;
 	  printf("\tThe value in Feet = %g",feet);
 	 break;
 	 
 	 case 6:
 	   printf("\n\tEnter the value in Meters: ");
 	   scanf("%f",&M);
   	   mm= 1000*M;
 	   printf("\tThe value in Millimeters = %g",mm);
 	 break;
 	 
 	 case 7:
 	   printf("\n\tEnter the value in Meters: ");
 	   scanf("%f",&M);
   	   cm= 100*M;
 	   printf("\tThe value in Centimeters = %g",cm);
 	 break;
 	 
 	 case 8:
 	   printf("\n\tEnter the value in Meters: ");
 	   scanf("%f",&M);
   	   in= 39.37*M;
 	   printf("\tThe value in Inches = %g",in);
 	 break;
 	 
 	 case 9:
 	   printf("\n\tEnter the value in Meters: ");
 	   scanf("%f",&M);
   	   miles= M/1609;
 	   printf("\tThe value in miles = %g",miles);
 	 break;
 	 
 	 case 10:
 	   printf("\n\tEnter the value in Meters: ");
 	   scanf("%f",&M);
   	   feet= 3.281*M;
 	   printf("\tThe value in Feet = %g",feet);
 	 break;
 	 
 	 case 11:
 	   printf("\n\tEnter the value in centimeters: ");
 	   scanf("%f",&cm);
   	   mm= 10*cm;
 	   printf("\tThe value in Millimeters = %g",mm);
 	 break;
 	 
 	 case 12:
 	   printf("\n\tEnter the value in centimeters: ");
 	   scanf("%f",&cm);
   	   M= cm/100;
 	   printf("\tThe value in Meters = %g",M);
 	 break;
 	 
 	 case 13:
 	   printf("\n\tEnter the value in centimeters: ");
 	   scanf("%f",&cm);
   	   in= cm/2.54;
 	   printf("\tThe value in Inches = %g",in);
 	 break;
 	 
 	 case 14:
 	   printf("\n\tEnter the value in centimeters: ");
 	   scanf("%f",&cm);
   	   miles= cm/160934;
 	   printf("\tThe value in Miles = %g",miles);
 	 break;
 	 
 	 case 15:
 	   printf("\n\tEnter the value in centimeters: ");
 	   scanf("%f",&cm);
   	   feet= cm/30.48;
 	   printf("\tThe value in Feet = %g",feet);
 	 break;
 	 
 	 case 16:
 	   printf("\n\tEnter the value in Inches: ");
 	   scanf("%f",&in);
   	   mm= 25.4*in;
 	   printf("\tThe value in Millimeters = %g",mm);
 	 break;
 	 
 	 case 17:
 	   printf("\n\tEnter the value in Inches: ");
 	   scanf("%f",&in);
   	   M= in/39.37;
 	   printf("\tThe value in Meters = %g",M);
 	 break;
 	 
 	 case 18:
 	   printf("\n\tEnter the value in Inches: ");
 	   scanf("%f",&in);
   	   miles= in/63360;
 	   printf("\tThe value in Miles = %g",miles);
 	 break;
 	 
 	 case 19:
 	   printf("\n\tEnter the value in Inches: ");
 	   scanf("%f",&in);
   	   cm= 2.54*in;
 	   printf("\tThe value in Centimeters = %g",cm);
 	 break;
 	 
 	 case 20:
 	   printf("\n\tEnter the value in Inches: ");
 	   scanf("%f",&in);
   	   feet= in/12;
 	   printf("\tThe value in Feet = %g",feet);
 	 break;
 	 
 	 case 21:
 	   printf("\n\tEnter the value in Miles: ");
 	   scanf("%f",&miles);
   	   mm= 1.609e+6*miles;
 	   printf("\tThe value in Millimeters = %g",mm);
 	 break;
 	 
 	 case 22:
 	   printf("\n\tEnter the value in Miles: ");
 	   scanf("%f",&miles);
   	   M= 1609*miles;
 	   printf("\tThe value in Meters = %g",M);
 	 break;
 	 
 	 case 23:
 	   printf("\n\tEnter the value in Miles: ");
 	   scanf("%f",&miles);
   	   cm= 160934*miles;
 	   printf("\tThe value in Centiimeters = %g",cm);
 	 break;
 	 
 	 case 24:
 	   printf("\n\tEnter the value in Miles: ");
 	   scanf("%f",&miles);
   	   in= 63360*miles;
 	   printf("\tThe value in Inches = %g",in);
 	 break;
 	 
 	 case 25:
 	   printf("\n\tEnter the value in Miles: ");
 	   scanf("%f",&miles);
   	   feet= 5280*miles;
 	   printf("\tThe value in Feet = %g",feet);
 	 break;
 	 
 	 case 26:
 	   printf("\n\tEnter the value in feet: ");
 	   scanf("%f",&feet);
   	   cm= feet*30.48;
 	   printf("\tThe value in Centiimeters = %g",cm);
 	 break;
 	 
 	 case 27:
 	   printf("\n\tEnter the value in feet: ");
 	   scanf("%f",&feet);
   	   M= feet/3.281;
 	   printf("\tThe value in Meters = %g",M);
 	 break;
 	 
 	 case 28:
 	   printf("\n\tEnter the value in feet: ");
 	   scanf("%f",&feet);
   	   cm= feet*30.48;
 	   printf("\tThe value in Centiimeters = %g",cm);
 	 break;
 	 
 	 case 29:
 	   printf("\n\tEnter the value in feet: ");
 	   scanf("%f",&feet);
   	   miles= feet/5280;
 	   printf("\tThe value in Miles = %g",miles);
 	 break;
 	 
 	 case 30:
 	   printf("\n\tEnter the value in feet: ");
 	   scanf("%f",&feet);
   	   in= feet*12;
 	   printf("\tThe value in Miles = %g",in);
 	 break;
 	 
 	 default:
 	 	printf("\n\tInvalid Choice !!!\n\n");
 		
    }
 }
