#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a digit: - ");
  scanf("%c",&ch);
  if (isxdigit(ch))
  {
        printf("%c is a hexadecimal\n",ch );
    } else
     {
  printf("Not a hexadecimal\n");
  }
  return 0;
}
