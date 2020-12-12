#include <stdio.h>

int getraenk(char auswahl, float preis) { 
  float geldstueck;
  
  printf("Sie haben %c gewaehlt. Das macht %.2f Euro\n", auswahl, preis);
  printf("Bitte Geldstueck geben: ");
  scanf("%f", &geldstueck);
  
  if (geldstueck == preis) {
    printf("Danke, beehren Sie uns bald wieder\n");
  } else if (geldstueck > preis) {
    printf("Hier ist ihr Wechselgeld von %.2f Euro\n", geldstueck - preis);
  } else {
    printf("Das ist leider zu wenig Geld\n");
  }
  
  return(0);
}

int main() {
  char auswahl;
  
  printf("Preisliste\n");
  printf("(w) Wasser      0.50 Euro\n");
  printf("(b) Bionade     1.00 Euro\n");
  printf("(o) Orangensaft 2.00 Euro\n\n");
  printf("Bitte waehlen Sie ein Getraenk: ");
  
  scanf("%c", &auswahl);
  
  if (auswahl == 'w') {
    getraenk(auswahl, 0.5);
  } else if (auswahl == 'b') {
    getraenk(auswahl, 1.);
  } else if (auswahl == 'o') {
    getraenk(auswahl, 2.);
  } else {
    printf("Ungueltige Auswahl\n");
  }
  
  return(0);
}
