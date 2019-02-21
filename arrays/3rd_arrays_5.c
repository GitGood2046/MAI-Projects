#include <stdio.h>

void main(){
  int a[10]={9,12,43,2,4,78,15,34,11,27}, i,j,tmp;
  printf("Unsorted array: ");
  for (i = 0; i<=9; i++){
    printf("a[%d] = %d ", i, a[i]);
  }
  printf("\n");
  for (i = 0; i<9; i++){
    for (j = i+1; j<=9; j++){
      if(a[i] > a[j]){
	tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
      }
    }
  }
  printf("Sorted array: ");
  for (i = 0; i<=9; i++){
    printf("a[%d] = %d ", i, a[i]);
  }
  printf("\n");
}
