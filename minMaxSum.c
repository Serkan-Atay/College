#include <stdio.h>

int main() {
  int i;
  float eingabe;
  int anzahl;
  float min, max, sum;
  
  printf("Wie viele Kommazahlen moechten Sie eingeben? ");
  scanf("%d", &anzahl);
  
  if (anzahl > 50) {
    printf("Bitte hoechstens 50 Zahlen angeben\n");
    return(0);
  }
  
  for (i = 0; i < anzahl; i++) {
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
