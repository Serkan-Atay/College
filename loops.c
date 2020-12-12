#include <stdio.h>

int kartprod(charstart, charend, intstart, intend) {
  while (charstart <= charend) {
    int intcounter = intstart;
    while (intcounter <= intend) {
      printf("(%c, %i) ", charstart, intcounter++);
    }
    printf("\n");
    charstart++;
  }
  
  return(0);
}

int main() {
  char charstart, charend;
  int intstart, intend;
    
  printf("Geben Sie einen Anfangsbuchstaben an: ");
  do {
    charstart = getchar();
    
  } while (charstart == '\n'); 
  if (charstart < 'a' || charstart > 'z') {
    printf("Ungueltige Eingabe\n");
    return(1);
  }

  printf("Geben Sie einen Endbuchstaben an: ");
   do {
     charend = getchar();
   } while (charend == '\n'); 
  if (charend < 'a' || charend > 'z') {
    printf("Ungueltige Eingabe\n");
    return(1);
  } else if (charend < charstart) {
    printf("Endbuchstabe muss im Alphabet nach dem Anfangsbuchstaben kommen\n");
    return(1);
  }
  
  printf("Geben Sie eine Anfangszahl an: ");
  scanf("%d", &intstart);
  
  printf("Geben Sie eine Endzahl an: ");
  scanf("%d", &intend);
  if (intend < intstart) {
    printf("Endzahl muss groesser als Anfangszahl sein!\n");
    return(1);
  }
  
  kartprod(charstart, charend, intstart, intend);
  
  return(0);
}
