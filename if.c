#include <stdio.h>

int main() {  
  char eingabe;
  
  /*do {
    printf("Geben Sie einen Grossbuchstaben ein: ");
    scanf("%c", &eingabe);
  } while ((int) eingabe < 65 || (int) eingabe > 90);*/
    
  printf("Geben Sie einen Grossbuchstaben ein: ");
  scanf("%c", &eingabe);
  
  if (eingabe < 'A' || eingabe > 'Z') {
    printf("Das ist kein Grossbuchstabe!\n");
    return(1);
  } 
    
    while (eingabe < 'Z') {
      printf("%c ", ++eingabe);
    }
    printf("\n");
  
  return(0);
}
