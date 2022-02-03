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
    if (a>c) {
      /* code */
      printf("%d is largest",a);
    } else {
      /* code */
      printf("%d is largest",c);
    }
  } else {
      if (b>c) {
        /* code */
        printf("%d is largest",b);
      } else {
        /* code */
        printf("%d is largest",c);
      }

      }
  return 0;
}
