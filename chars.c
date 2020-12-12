#include <stdio.h>

int main() {
  char text[] = "We all live in a yellow submarine, yellow submarine";
  int e_counter = 0;
  int i = 0;
  
  while (text[i] != '\0') {
    if (text[i] == 'e') e_counter++;
    i++;
  }
  
  printf("Counted %d e's\n", e_counter);
  return(0);
}
