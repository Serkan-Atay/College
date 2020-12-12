#include <stdio.h>
#include<ctype.h>

int main() {
  char auswahl;
  float geldstueck, preis;
  
  printf("Preisliste\n");
  printf("(w) Wasser      0.50 Euro\n");
  printf("(b) Bionade     1.00 Euro\n");
  printf("(o) Orangensaft 2.00 Euro\n");
  printf("(x) abbrechen\n\n");
  
  while (auswahl != 'w' && auswahl != 'b' && auswahl != 'o' && auswahl != 'x') {
    if (auswahl != '\n') {
        printf("Bitte waehlen Sie ein Getraenk: ");
    }
    auswahl = tolower(getchar());
  }
    
  if (auswahl == 'w') {
    preis = 0.5;
  } else if (auswahl == 'b') {
    preis = 1.;
  } else if (auswahl == 'o') {
    preis = 2.;
  } else if (auswahl == 'x') {
    printf("Vorgang abgebrochen\n");
    return(0);
  } 
  
  while (geldstueck != preis) {
    if (geldstueck == 0.0) {
      printf("Vorgang abgebrochen\n");
    return(0);
    }
    printf("Bitte passendes Geldstueck einwerfen: ");
    scanf("%f", &geldstueck);
  }
  
  return(0);
}
