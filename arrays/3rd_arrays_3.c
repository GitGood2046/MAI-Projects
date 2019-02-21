#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
  int a[10], b[10], i;
  srand(time(NULL));
  for (i = 0; i<=9; i++){
    a[i]=rand();
  }
  for (i = 0; i<=9; i++){
    b[i]=a[i];
  }
  for (i = 0; i<=9; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
  for (i = 0; i<=9; i++){
    printf("b[%d] = %d\n", i, a[i]);
  }
}
