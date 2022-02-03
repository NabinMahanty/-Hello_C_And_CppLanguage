#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c,max;
  printf("Enter the first value: ");
  scanf("%d",&a);
  printf("Enter the second value: ");
  scanf("%d",&b);
  printf("Enter the third value: ");
  scanf("%d",&c);
  max = a>b?(a>c?a:c):(b>c?b:c);
  printf("largest is %d\n",max );
  return 0;
}
