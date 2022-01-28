#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char ch[] = "12.456Hello152";
  float f;
  char *ptr;
  f = strtod(ch,&ptr);
  printf("%f\n %s\n",f,ptr);
  return 0;
}
