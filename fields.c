#include <stdio.h>
#include <math.h>

unsigned int i;

void bulksqrt(double *p, unsigned int n) {
  for (i = 0; i < n; i++) {
    p[i] = sqrt(p[i]);
  }
}

void printdoubles(double *p, unsigned int n) {
  for (i = 0; i < n-1; i++) {
    printf("%.3f, ", p[i]);
  }
  printf("%.3f\n", p[n-1]);
}

int main() {
  double feld[10] = {1.2, 3.4, 5.6, 4, 16, 256, 2, 80, 3.6, 100};
  double *p = feld;
  
  bulksqrt(p, 10);
  printdoubles(p, 10);
  
  return 0;
}
