#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  printf("Enter a digit: - ");
  scanf("%c",&ch);
  if (ispunct(ch))
  {
        printf("%c is a punctuation\n",ch );
    } else
     {
  printf("Not a punctuation\n");
  }
  return 0;
}
