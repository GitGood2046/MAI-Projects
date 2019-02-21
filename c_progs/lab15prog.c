#include<stdio.h>
#define max_n 8


int abs_shift(int m) {
  if (m<0) {
    return m*-1;
  }
  return m;
}

int main() {
  int N;
  int steps;
  scanf("%d",&N);
  if (N > max_n) {
    printf("N is too big.");
    return -1;
  }
  else if (N < 1) {
    printf("N is too small.");
    return -1;
  }

  printf("Enter a number of steps: ");
  scanf("%d",&steps);

  int matrix1[N][N];
  int matrix2[N][N];

  for (int i=0 ; i<N ; ++i) {
    for (int j=0 ; j<N ; ++j) {
      scanf("%d", &(matrix1[i][j]));
    }
  }


  for (int i=0 ; i<N ; ++i) {
    for (int j=0 ; j<N ; ++j) {
      matrix2[i][(j+steps+abs_shift(steps*N))%N] = matrix1[i][j];
    }
  }

  printf("\n");

  for (int i=0 ; i<N ; ++i) {
    for (int j=0 ; j<N ; ++j) {
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
