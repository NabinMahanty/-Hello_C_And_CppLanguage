#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a char: -");
  scanf("%c",&ch);
  if (isalpha(ch))
  {
        printf("%c is an alpha\n",ch );
    } else
     {
  printf("Not a alpha\n");
  }
  return 0;
}
