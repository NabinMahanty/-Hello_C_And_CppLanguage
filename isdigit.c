#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a digit: - ");
  scanf("%c",&ch);
  if (isdigit(ch))
  {
        printf("%c is a digit\n",ch );
    } else
     {
  printf("Not a digit\n");
  }
  return 0;
}
