#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a digit: - ");
  scanf("%c",&ch);
  if (isspace(ch))
  {
        printf("%c is a space\n",ch );
    } else
     {
  printf("Not a space\n");
  }
  return 0;
}
