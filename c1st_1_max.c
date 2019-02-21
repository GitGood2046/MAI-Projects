#include <stdio.h>
#include <locale.h>
int main()
{
  double a,b,c,max;
  setlocale(LC_CTYPE,"russian");
  printf("Выведите a, b, c: \n");
  scanf("%lf%lf%lf", &a,&b,&c);
  if (a>b && a>c) {
    printf("max=%.2f\n", a);
    }
  if (b>a && b>c) {
    printf("max=%.2f\n", b);
    }
  if (c>a && c>b) {
    printf("max=%.2f\n", c);
    }
}
