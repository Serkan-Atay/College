#include <stdio.h>

int main() {
  char x = 'a';
  
  while (x <= 'd') {
    int y = 1;
    
    while (y <= 5) {
      printf("(%c, %i) ", x, y++);
    }
    
    printf("\n");
    x++;
  }  

  return(0);
}
