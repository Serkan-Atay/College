#include <stdio.h>

int main() {
  printf("a) %%d, (8/5)/2 = %d\n", (8/5)/2);
  printf("b) %%f, (8/5)/2 = %f\n", (8/5)/2);
  printf("c) %%d, 8/(5/2) = %d\n", 8/(5/2));
  printf("d) %%f, (float) 5/2 = %f\n", (float) 5/2);
  printf("d*) %%f, 5 / (float) 2 = %f\n",5 / (float)  2);
  printf("e) %%f, (float) (5/2) = %f\n", (float) (5/2));
  printf("f) %%d (8/5.)/2 = %d\n", (8/5.)/2); // stimmt da etwas nicht?
  printf("g) %%f (8/5)/2. = %f\n", (8/5)/2.);
  printf("h) %%d (50/4)%2 = %d\n", (50/4)%2);
  printf("i) %%d (50%4)/2 = %d\n", (50%4)/2);
  printf("j) %%d 50%(4/2) = %d\n", 50%(4/2));
  
  return(0);
}
