#include <stdio.h>
#include <math.h>

unsigned int i;

void bulksqrt(double f[], unsigned int n) {
  for (i = 0; i < n; i++) {
    f[i] = sqrt(f[i]);
  }
}

void printdoubles(double f[], unsigned int n) {
  for (i = 0; i < n-1; i++) {
    printf("%.3f, ", f[i]);
  }
  printf("%.3f\n", f[n-1]);
}

int main() {
  double feld[10] = {1.2, 3.4, 5.6, 4, 16, 256, 2, 80, 3.6, 100};
    
  bulksqrt(feld, 10);
  printdoubles(feld, 10);
  
  return 0;
}
