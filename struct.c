#include <stdio.h>

 int main() {
   struct kontakt {
     char vorname[30];
     char nachname [30];
     long telefonnummer;
     char strasse[40];
     unsigned short hausnummer;
     unsigned int plz;
     char ort[40];
   };
     
   struct kontakt kontakte[50] = {
     {"Albert", "Einstein", 314, "Albertstrasse", 1, 4444, "Berlin"},
     {"Bob", "Sled", 555123348957, "Eisring", 66, 63451, "Bamberg"}
   };
     
     
   
   return(0);
 }
