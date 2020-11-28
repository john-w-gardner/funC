#include <stdio.h>

#define MAX 20
/* make a character move from end to end */

int main()
{
  int i;

  char s[MAX];
  s[MAX-1] = '\0';
  s[0] = '|';
  s[MAX-2] = '|';

  for (i=1; i < MAX-2 ; ++i)
    s[i] = ' ';
  
  i = 1;
  s[i] = 'X';
  printf("%s\n", s);

  while (i < MAX-3) {
    s[i] = ' ';
    s[++i] = 'X';
    printf("%s\n", s);
  }

  while (i > 1) {
    s[i] = ' ';
    s[--i] = 'X';
    printf("%s\n", s);
  }
}
