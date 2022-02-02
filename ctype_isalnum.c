#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a char: -");
  scanf("%c",&ch);
  if (isalnum(ch)) {
    printf("%c is an alphanum\n",ch );
    }
  return 0;
}
