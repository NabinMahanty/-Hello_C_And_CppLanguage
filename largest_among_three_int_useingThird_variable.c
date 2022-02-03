#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b,c,max;
  printf("Enter the first value: ");
  scanf("%d",&a);
  printf("Enter the second value: ");
  scanf("%d",&b);
  printf("Enter the third value: ");
  scanf("%d",&c);
  if (a>b) {
    /* code */
    max=a;
  } else {
    /* code */
    max=b;
  }
  if (c>max) {
    /* code */
    printf("%d is largest",c);
  } else {
    /* code */
    printf("%d is largest",max );
  }
  return 0;
}
