#include <stdio.h>

int main(){
  int a[10]={1,1,2,3,5,8,13,21,34,55}, i;
  for (i = 0; i<=9; i++){
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}
