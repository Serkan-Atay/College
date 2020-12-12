#include <stdio.h>

int main() {
  int i;
  float eingabe;
  float min, max, sum;
  
  for (i = 0; i < 10; i++) {
    printf("Eingabe %d: ", i);
    
    do { 
      scanf("%f", &eingabe);
    } while (eingabe == '\n');
    
    if (i == 0) min = max = sum = eingabe;
    else sum = sum + eingabe;
    if (eingabe < min) min = eingabe;
    if (eingabe > max) max = eingabe;
  }
  
  printf("Min: %f\n", min);
  printf("Max: %f\n", max);
  printf("Sum: %f\n", sum);
  
  return(0);
}
