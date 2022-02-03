#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c,max;
  printf("Enter the first value: ");
  scanf("%d",&a);
  printf("Enter the second value: ");
  scanf("%d",&b);
  printf("Enter the third value: ");
  scanf("%d",&c);
  if (a>b&&a>c)
  {
    printf("%d is largest",a);
  }
  if (b>a&&b>c) {
    /* code */
    printf("largest is %d",b );
  }
  if (c>a&&c>b) {
    /* code */
    printf("%d is largest\n",c );
  }
  return 0;
}
