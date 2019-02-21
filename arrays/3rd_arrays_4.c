#include <stdio.h>

void main(){
  int a[6]={142, 23, 97, 19, 2, 4}, i,j,tmp;
  printf("Unsorted array: ");
  for (i = 0; i<6; i++){
    printf("a[%d] = %d ", i, a[i]);
  }
  printf("\n");
  for (i = 0; i<6; i++){
    for (j = i+1; j<6; j++){
      if(a[i] > a[j]){
	tmp=a[i];
	a[i]=a[j];
	a[j]=tmp;
      }
    }
  }
  printf("Sorted array: ");
  for (i = 0; i<6; i++){
    printf("a[%d] = %d ", i, a[i]);
  }
  printf("\n");
}
