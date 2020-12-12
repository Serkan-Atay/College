#include <stdio.h>

int main() {
  float oberseite, unterseite, hoehe;
  
  printf("Wie hoch ist ihr Trapez? ");
  scanf("%f", &hoehe);
  
  printf("Wie lang ist die Oberseite? ");
  scanf("%f", &oberseite);
  
  printf("Wie lang ist die Unterseite? ");
  scanf("%f", &unterseite);
  
  float flaeche = ((oberseite + unterseite) / 2) * hoehe;
  printf("\nDie Flaeche betraegt: %f\n", flaeche);
  
  return(0);
}
