#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,r;
  printf("Enter a number:");
  scanf("%d",&a);
  r = a%2;
  if (r==0) {
    /* code */
    printf("%d is a even number",a );
  }
  else
  {
    printf("%d is odd number",a);
  }
  return 0;
}
