#include <stdio.h>

int main() {
  char c;
  int counter = 1;
  unsigned short word_start;
  
  printf("Geben Sie einen Text ein:\n");
    
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (word_start == 1) ++counter;
      word_start = 0;
      continue;
    }
    word_start = 1;
  }
  
  printf("\nIhr Text hat %d Woerter\n", counter);
  
  return(0);
}
