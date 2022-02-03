#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,max;
  printf("Enter value for a: ");
  scanf("%d",&a);
  printf("Enter value for b: ");
  scanf("%d",&b);
  max = a>b? a:b;
  printf("%d is largest number\n",max);
  return 0;
}
