#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,b;
  printf("Enter the first value: ");
  scanf("%d",&a);
  printf("Enter the second value: ");
  scanf("%d",&b);
  if (a==b)
 {
    printf("Enter two different integers");
  } else
 {
      if (a>b)
       {
          printf("%d is largest among %d and %d",a,a,b);
      }
      else
      {
        printf("%d is largest among %d and %d",b,a,b);
      }
  }
  return 0;
}
