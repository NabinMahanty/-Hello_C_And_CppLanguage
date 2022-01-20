#include <stdio.h>
int main()

{
	float kg,g,mg,P,Q,ton;  //us ton
	int choice;
	
printf("\n1: Convert kg to g \t\t|\t\t16: Convert Pound to  kg");
printf("\n2: Convert kg to mg\t\t|\t\t17: Convert Pound to  g");
printf("\n3: Convert kg to Pound\t\t|\t\t18: Convert Pound to  mg");
printf("\n4: Convert kg to Quintal\t|\t\t19: Convert Pound to  Quintal");
printf("\n5: Convert kg to ton\t\t|\t\t20: Convert Pound to  ton");
printf("\n6: Convert g to  kg\t\t|\t\t21: Convert Quintal to  kg");
printf("\n7: Convert g to  mg\t\t|\t\t22: Convert Quintal to  g");
printf("\n8: Convert g to  Pound\t\t|\t\t23: Convert Quintal to  mg");
printf("\n9: Convert g to  Quintal\t|\t\t24: Convert Quintal to  Pound");
printf("\n10: Convert g to  ton\t\t|\t\t25: Convert Quintal to  ton");
printf("\n11: Convert mg to  kg\t\t|\t\t26: Convert Ton to  kg");
printf("\n12: Convert mg to  g\t\t|\t\t27: Convert Ton to  g");
printf("\n13: Convert mg to  Pound\t|\t\t28: Convert Ton to  mg");
printf("\n14: Convert mg to  Quintal\t|\t\t29: Convert Ton to  Pound");
printf("\n15: Convert mg to  ton\t\t|\t\t30: Convert Ton to  Quintal");


 printf("\n\nEnter your choice:");
 scanf("%d",&choice);

if (choice==1)
 {
	printf("\nEnter the value in kg: ");
	scanf("%f",&kg);
	g= 1000*kg;
	printf("The value in gram: %g",g);
 }
else if (choice==2)
 {
	printf("\nEnter the value in kg: ");
	scanf("%f",&kg);
	mg= 1000000*kg;
	printf("The value in mg: %.2f",mg);
 }
else if (choice==3)
 {
 	printf("\nEnter the value in kg: ");
	scanf("%f",&kg);
	P= 2.205*kg;
	printf("The value in Pound : %g",P);
 }
else if (choice==4)
 {
 	printf("\nEnter the value in kg: ");
 	scanf("%f",&kg);
 	Q= kg/100;
 	printf("The value in Quintal : %.2f",Q);
 	
 }
else if (choice==5)
 {
 	printf("\nEnter the value in kg: ");
 	scanf("%f",&kg);
 	ton= kg/907;
 	printf("The value in Ton : %.5f",ton);
 }
else if (choice==6)
 {
 	printf("\nEnter the value in  g: ");
 	scanf("%f",&g);
 	kg= g/1000;
 	printf("The value in kg : %.g",kg);
 }
else if (choice==7)
 {
 	printf("\nEnter the value in  g: ");
 	scanf("%f",&g);
 	mg= g*1000;
 	printf("The value in  mg : %.g",mg);
 }
else if (choice==8)
 {
 	printf("\nEnter the value in  g: ");
 	scanf("%f",&g);
 	P= g/454;
 	printf("The value in Pound : %.g",P);
 }
else if (choice==9)
 {
 	printf("\nEnter the value in  g: ");
 	scanf("%f",&g);
 	Q= g/100000;
 	printf("The value in Quintal : %f",Q);
 }
else if (choice==10)
 {
 	printf("\nEnter the value in  g: ");
 	scanf("%f",&g);
 	ton= g/907185;
 	printf("The value in Ton : %g",ton);
 }
else if (choice==11)
 {
 	printf("\nEnter the value in mg: ");
 	scanf("%f",&mg);
 	kg= mg/1e+6;
 	printf("The value in KG : %g",kg);
 }
else if (choice==12)
 {
 	printf("\nEnter the value in mg: ");
 	scanf("%f",&mg);
 	g=mg/1000;
 	printf("The value in Gram: %g",g);
 }
else if (choice==13)
 {
    printf("\nEnter the value in mg: ");
 	scanf("%f",&mg);
 	P=mg/453592;
 	printf("The value in Pound: %g",P);
 }
else if (choice==14)
 {
 	printf("\nEnter the value in mg: ");
 	scanf("%f",&mg);
 	Q=mg/1e+8;
 	printf("The value in Quintal: %g",Q);
 }
else if (choice==15)
 {
 	printf("\nEnter the value in mg: ");
 	scanf("%f",&mg);
 	ton=mg/9.072e+8;
 	printf("The value in Ton: %g",ton);
 }
else if (choice==16)
 {
 	printf("\nEnter the value in Pound: ");
 	scanf("%f",&P);
 	kg=P/2.205;
 	printf("The value in KG: %g",kg);
 }
else if (choice==17)
 {
 	printf("\nEnter the value in Pound: ");
 	scanf("%f",&P);
 	g=P*454;
 	printf("The value in Gram: %g",g);
 }
else if (choice==18)
 {
 	printf("\nEnter the value in Pound: ");
 	scanf("%f",&P);
 	mg=P*453592;
 	printf("The value in MG: %g",mg);
 }
else if (choice==19)
 {
 	printf("\nEnter the value in Pound: ");
 	scanf("%f",&P);
 	Q=P/220;
 	printf("The value in Quintal: %g",Q);
 }
else if (choice==20)
 {
 	printf("\nEnter the value in Pound: ");
 	scanf("%f",&P);
 	ton=P/2000;
 	printf("The value in Ton: %g",ton);
 }
else if (choice==21)
 {
 	printf("\nEnter the value in Quintal: ");
 	scanf("%f",&Q);
 	kg=Q*100;
 	printf("The value in KG: %g",kg);
 }
else if (choice==22)
 {
  	printf("\nEnter the value in Quintal: ");
 	scanf("%f",&Q);
 	g=Q*100000;
 	printf("The value in Gram: %g",g);
 }
else if (choice==23)
 {
 	printf("\nEnter the value in Quintal: ");
 	scanf("%f",&Q);
 	mg=Q*1e+8;
 	printf("The value in MG: %g",mg);
 }
else if (choice==24)
 {
 	printf("\nEnter the value in Quintal: ");
 	scanf("%f",&Q);
 	P=Q*220;
 	printf("The value in MG: %g",P);
 }
else if (choice==25)
 {
 	printf("\nEnter the value in Quintal: ");
 	scanf("%f",&Q);
 	ton=Q/9.072;
 	printf("The value in Ton: %g",ton);
 }
else if (choice==26)
 {
 	printf("\nEnter the value in ton: ");
 	scanf("%f",&ton);
 	kg=ton*907;
 	printf("The valu in KG: %g",kg);
 }
else if (choice==27)
 {
 	printf("\nEnter the value in ton: ");
 	scanf("%f",&ton);
 	g=ton*907185;
 	printf("The valu in Gram: %g",g);
 }
else if (choice==28)
 {
 	printf("\nEnter the value in ton: ");
 	scanf("%f",&ton);
 	mg=ton* 9.072e+8;
 	printf("The valu in MG: %g",mg);
 }
else if (choice==29)
 {
 	printf("\nEnter the value in ton: ");
 	scanf("%f",&ton);
 	P=ton*2000;
 	printf("The valu in Pound: %g",P);
}
else if (choice==30)
 {
 	printf("\nEnter the value in ton: ");
 	scanf("%f",&ton);
 	Q=ton* 9.072;
 	printf("The valu in Quintal: %g",Q);
}
 else
 {
    printf("\nInvalid Choice !!!");
 }
    return 0;
}
