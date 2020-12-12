#include <stdio.h>

int main() {
  int zeilen_a, zeilen_b, spalten_a, spalten_b;
  
  // Eingabe Dimensionen
  printf("Zeilen Matrix A: ");
  scanf("%d", &zeilen_a);
  
  printf("Spalten Matrix A / Zeilen Matrix B: ");
  scanf("%d", &spalten_a);
  zeilen_b = spalten_a;
  
  printf("Spalten Matrix B: ");
  scanf("%d", &spalten_b);
    
  // Initialisierung der Matrizen
  int matrix_a[zeilen_a][spalten_a];
  int matrix_b[zeilen_b][spalten_b];
  
  int i,j;
  // Eingaben fÃ¼r Matrix A
  for (i = 0; i < zeilen_a; i++) {
    for (j = 0; j < spalten_a; j++) {
      printf("Wert A_%d,%d: ", i, j);
      scanf("%d", &matrix_a[i][j]);
    }
  }
  
  // Eingaben fÃ¼r Matrix B
  for (i = 0; i < zeilen_b; i++) {
    for (j = 0; j < spalten_b; j++) {
      printf("Wert B_%d,%d: ", i, j);
      scanf("%d", &matrix_b[i][j]);
    }
  }
  
  // Multiplikation
  int sum;
  int k,l;
  
  for (i = 0; i < zeilen_a; i++) {
    for (j = 0; j < spalten_b; j++) {
      sum = 0;
      k = l = 0;
      while (k < spalten_a) {
	sum += matrix_a[i][k] * matrix_b[k][j];
	k++;
      }
      printf("%d ", sum);
    }
    printf("\n");    
  }

  return(0);
}
