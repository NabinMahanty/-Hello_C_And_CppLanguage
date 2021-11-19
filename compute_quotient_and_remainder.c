#include<stdio.h>
int main()
{
  int divident,divisor,quotient,remainder;
  printf("Enter the divident:-");
  scanf("%d",&divident);
  printf("Enter the divisor:-");
  scanf("%d",&divisor);
  quotient=divident/divisor;
  remainder=divident%divisor;
  printf("quotient=%d\n",quotient);
  printf("remainder=%d\n",remainder);
}	
