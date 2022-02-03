#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i =1,n;
  printf("Enter the value for n: ");
  scanf("%d",&n);
  while (i<n) {
    /* code */
    if (i%2==1) {
      /* code */
      printf("%d\n",i );
    }
    i++;
  }
  return 0;
}
