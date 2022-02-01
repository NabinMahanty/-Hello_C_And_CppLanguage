#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i = 1,j = 1,k = 1;
  for ( i = 1; i <=3; i++)
  {
      for ( j = 1; j <=3; j++)
      {
            for ( k = 1; k <=3; k++)
             {
                printf("%d%d%d\n",i,j,k);
            }
      }
  }
  return 0;
}
