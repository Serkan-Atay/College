#include <stdio.h>
#include <string.h>

struct kontakt {
  char vorname[30];
  char nachname[30];
  char telefonnummer[30];
  char strasse[40];
  unsigned short hausnummer;
  unsigned int plz;
  char ort[40];
};


// zeigt einen einzelnen Kontakt an
void print_kontakt(struct kontakt k) {
  printf("Name:          %s %s\n", k.vorname, k.nachname);
  printf("Strasse:       %s\n", k.strasse);
  printf("Hausnummer:    %u \n", k.hausnummer);
  printf("PLZ:           %hu\n", k.plz);
  printf("Ort:           %s\n", k.ort);
  printf("Telefonnummer: %s\n", k.telefonnummer); 
  printf("\e[0;34m------------------------------\e[0m\n");
}

struct kontakt read_kontakt(void) {
  struct kontakt k;
  unsigned short len;
  
  printf("\nBitte Kontaktdaten eingeben\n");
      
  printf("Vorname: ");
  fgets(k.vorname, 30, stdin);
  len = strlen(k.vorname);
  k.vorname[len-1] = '\0';
	  
  printf("Nachname: ");
  fgets(k.nachname, 30, stdin);
  len = strlen(k.nachname);
  k.nachname[len-1] = '\0';
  
  printf("Strasse: ");
  fgets(k.strasse, 30, stdin);
  len = strlen(k.strasse);
  k.strasse[len-1] = '\0';
  
  printf("Hausnummer: ");
  scanf("%hu", &k.hausnummer);
  
  printf("PLZ: ");
  scanf("%u", &k.plz);
  getchar();
  
  printf("Ort: ");
  fgets(k.ort, 40, stdin);
  len = strlen(k.ort);
  k.ort[len-1] = '\0';
  
  printf("Telefonnummer:");
  fgets(k.telefonnummer, 40, stdin);
  len = strlen(k.ort);
  k.ort[len-1] = '\0';
  
  return k;
}

int main() {
  unsigned short kontaktzaehler;

  // ausgedachte Kontaktdaten
  struct kontakt kontakte[50] = {
    {"Albert", "Einstein", "+1 555 314", "Albertstrasse", 1, 44444, "Berlin"},
    {"Bob", "Sled", "+49 69 12334897", "Eisring", 24, 63451, "Bamberg"}
  };
  kontaktzaehler = 2;
  
  unsigned int i;
  int auswahl = -1;
  while (auswahl != 9) {
    
    if (auswahl == 1) {
      // Kontakte anzeigen
      printf("\nSie haben %d Kontakt(e)\n", kontaktzaehler);
      printf("\e[0;34m------------------------------\e[0m\n");
      for (i = 0; i < kontaktzaehler; i++) {
	print_kontakt(kontakte[i]);
      }
      
      auswahl = -1;
    } else if (auswahl == 2) {
      // Kontakt hinzufuegen
      kontakte[kontaktzaehler] = read_kontakt();
      kontaktzaehler++;
      printf("\n");
      auswahl = -1;
    } else if (auswahl == 9) {
      return(0);
    } else {
      // Menu
      printf("\e[4;32mAdressbuch\e[0m (version 0.1)\n");
      printf("1) Alle Kontaktdaten anzeigen (%d Stueck)\n", kontaktzaehler);
      printf("2) Neuen Kontakt hinzufÃ¼gen\n");
      printf("9) Programm beenden\n");
      printf("Ihre Auswahl: ");
      scanf("%d", &auswahl);
      getchar();
    }
  }
    
    
    
  
  return(0);
}
 
