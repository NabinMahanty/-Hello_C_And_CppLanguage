#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a char: - ");
  scanf("%c",&ch);
  if (islower(ch))
  {
        printf("%c is an lower case alpha\n",ch );
    } else
     {
  printf("Not a lower alpha\n");
  }
  return 0;
}
