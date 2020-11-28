#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>
#include <string.h>

/* 
euclidean algorithm: given integers a and b, 
find their greatest common divisor
 */

int main(int argc, char *argv[])
{
  if (argc < 3) {
    printf("usage: euc a b\n");
    return 0;
  }

  printf("%d\n", atoi(argv[1]));
  printf("%d\n", atoi(argv[2]));
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int r0 = a > b ? a : b;
  int r1 = a > b ? b : a;

  int r2 = r0%r1;
  int q = r0/r1;

  do {
    printf("%d = %d * %d + %d\n", r0, q, r1, r2);
    r0 = r1;
    r1 = r2;
    r2 = r0 % r1;
    q = r0 / r1;
  } while (r2 != 0);

  printf("%d %d %d\n", r2, r1, r0);

  return 0;
}
