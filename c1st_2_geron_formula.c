#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,p,s;
  printf("Vvedite a,b,c: \n");
  scanf("%f%f%f", &a,&b,&c);
  p = (a + b + c) / 2;
  s = sqrt(p * (p-a) * (p-b) * (p-c));
  printf("\n p = %5.1f s = %10.2f \n", p, s);
}
