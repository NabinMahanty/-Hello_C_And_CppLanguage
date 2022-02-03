#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,r;
  printf("Enter a number: ");
  scanf("%d",&a);
  r = a & 1;
  if (r==0) {
    /* code */
    printf("%d is even number",a);
  } else {
    /* code */
    printf("%d is odd number",a );
  }
  return 0;
}
