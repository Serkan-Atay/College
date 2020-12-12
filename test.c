#include <stdio.h>

int main() {
  int feld[3] = {1,2,3};
  int *p = feld;
  
  printf("%d\n", p[2]);
  
  return 0;
} 
