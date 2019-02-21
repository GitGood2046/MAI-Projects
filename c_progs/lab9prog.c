#include<stdio.h>
#include<math.h>

int abs(int n) {
  if (n >= 0) {
    return n;
  }
  return n*-1;
}

int max(int n, int m) {
  if (n >= m) {
    return n;
  }
  return m;
}

int min(int n, int m) {
  if (n < m) {
    return n;
  }
  return m;
}

int sign(int n) {
  if (n > 0) {
    return 1;
  }
  if (n == 0) {
    return 0;
  }
  return -1;
}


int main() {
  long int i,j,k,l;
  long int i1,j1,l1;
  i = 24;
  j = -14;
  l = 9;
  for (k=0 ; k<50 ; ++k) {
    if (i>=5 && i<=15) {
      if (j>=-15 && j<=-5) {
	printf("Intersection in i = %ld j = %ld l = %ld on %ld step.\n",i,j,l,k);
	return 0;
      }
    }
    i1 = ((i+k)*(j-k)*(l+k))%25;
    j1 = min((i+k),max((j-k),(l-k))%30);
    l1 = (abs(j-l)*sign(i))-(abs(i-l)*sign(j));
    i = i1;
    j = j1;
    l = l1;
  }
  printf("No intersection in i = %ld j = %ld l = %ld on %ld step.\n",i,j,l,k);
  return 0;
}
