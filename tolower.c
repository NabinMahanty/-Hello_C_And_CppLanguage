#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[]) {
  char ch;
  char ch1;
  printf("Enter a upper case letter\n");
  scanf("%c",&ch);
  ch1 = tolower(ch);
  printf("%c = %c\n",ch,ch1 );
  return 0;
}
