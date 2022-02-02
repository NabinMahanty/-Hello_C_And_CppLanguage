#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a char: - ");
  scanf("%c",&ch);
  if (isupper(ch))
  {
        printf("%c is an upper case alpha\n",ch );
    } else
     {
  printf("Not a upper cas alpha\n");
  }
  return 0;
}
