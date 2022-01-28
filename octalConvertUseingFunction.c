#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char ch[20];
  int x = 10;
  itoa(x,ch,8);//itoa(int value,)
  printf("%s\n",ch );
  return 0;
}
