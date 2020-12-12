#include <stdio.h>

void to_lower(char *p) {
  int i = 0;
  while (p[i] != 0) {
    if (p[i] >= 65 && p[i] <= 90) p[i] = p[i] + 32;
    i++;
  }
}

int main() {
  char string[256];
  char *p = string;
  
  printf("Bitte Zeichenkette eingeben: ");
  scanf("%s", string);
  
  to_lower(p);
  printf("Zeichenkette in Kleinbuchstaben: %s\n", string);
  
  return 0;
}
