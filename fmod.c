#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  float a,b;
  int c;
  a = 6;
  b = 3;
  c = 3;
  printf("Rem of %f / %d is %lf\n",a, c,fmod(a,c) );
  printf("Rem of %f / %d is %lf\n",a, b,fmod(a,b) );

  return 0;
}
