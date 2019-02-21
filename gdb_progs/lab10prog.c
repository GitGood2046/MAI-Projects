#include <stdio.h>

void main()
{
  int i,p,d;
  p = 10;
  d = 0;
  for (i=0 ; i<12 ; ++i) {
    d = i/p;
    printf("The result if this div is: %d\n", d);
    p -= 1;
  }
}
