#include <stdio.h>

int main() {
  int i;
  
  printf("Geben Sie eine Ganzzahl ein: ");
  int return_value = scanf("%d", &i);
  
  if (return_value == 0) {
    printf("Ungueltige Eingabe\n");
    return(1);
  }
  
  if (i > 0) {
    printf("Die Zahl ist positiv\n");
  } else if (i == 0) {
    printf("Die Zahl ist null\n");
  } else {
    printf("Die Zahl ist negativ\n");
  } 

  return(0);
}
