/*error*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n,max,i,value;
  printf("How many number you want tally: ");
  scanf("%d",&value);
  max = value;
  i = 1;
  while (i<=(n-1)) {
    /* code */
    printf("Enter any value: ");
    scanf("%d",&value);
    if (value>max) {
      /* code */
      max = value;
    }
    i++;
  }
    printf("\n\nLargest is %d",max);
  return 0;
}
