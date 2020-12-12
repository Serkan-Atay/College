#include <stdio.h>

int main() {
  int matrix_a[3][5] = {
    {2, -1, 5, 7, 12},
    {0, 9, 7, 6, 5},
    {-3, 0, 1, -1, 0}
  };
  int matrix_b[5][2] = {
    {1, -2},
    {2, 0},
    {3, 1},
    {1, 0},
    {-1, 1}
  };
  int sum;
  
  int i,j,k,l;
  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      sum = 0;
      k = l = 0;
      while (k < 5) {
	sum += matrix_a[i][k] * matrix_b[k][j];
	k++;
      }
      printf("%d ", sum);
    }
    printf("\n");    
  }
  
  return(0);
}
