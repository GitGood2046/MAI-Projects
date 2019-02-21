#include<stdio.h>
#include<math.h>
#define max_n 7

int main() {
  int matrix[max_n][max_n];
  int N;

  scanf("%d",&N);

  if (N>max_n) {
    printf("N is too big");
    return -1;
  }

  for (int i=0 ; i<N ; ++i) {
    for (int j=0 ; j<N ; ++j) {
      matrix[i][j] = (10*(i+1))+j+1;
    }
  }

  printf("\n");

  //print matrix

  for (int i=0 ; i<N ; ++i) {
    for (int j=0 ; j<N ; ++j) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  int stage = 1;
  int a = 0;
  int b = 0;
  int steps = 0;

  while (steps < (N*N)) {
    if (stage == 1) {
      if (b == N-1) {
	printf("%d ",matrix[a][N-b-1]);
	steps += 1;
	stage = 2;
	a += 1;
      }
      else if (a == 0) {
	printf("%d ",matrix[a][N-b-1]);
	steps += 1;
	stage = 2;
	b += 1;
      }
      else {
	printf("%d ",matrix[a][N-b-1]);
	b += 1;
	a -= 1;
	steps += 1;
      }
    }
    else if (stage == 2) {
      if (a == N-1) {
	printf("%d ",matrix[a][N-b-1]);
	steps += 1;
	stage = 1;
	b += 1;
      }
      else if (b == 0) {
	printf("%d ",matrix[a][N-b-1]);
	steps += 1;
	stage = 1;
	a += 1;
      }
      else {
	printf("%d ",matrix[a][N-b-1]);
	a += 1;
	b -= 1;
	steps += 1;
      }
    }
  }
  printf("\n");
  return 0;
}
