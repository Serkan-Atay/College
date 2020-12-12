#include <stdio.h>

int main()  {
  int i;
  char c;
  
  for (i = 0; i < 256; i++) {
    if (i % 16 == 0) {
      printf("\n%i: ", i / 16);
    }
    c = i;
    printf("%c ", c);
  } 
  printf("\n");
  return(0);
}
