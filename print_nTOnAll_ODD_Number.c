#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,n,m;
  printf("Enter the value for first: ");
  scanf("%d",&n);
  printf("Enter the value for second: ");
  scanf("%d",&m);
  i=n;
  while (i<m) {
    /* code */
    if (i%2==1) {
      /* code */
      printf("%d\t",i );
    }
    i++;
  }
  return 0;
}
