#include <stdio.h>
#include <limits.h>

int main() {
  printf("3 * 1024 = %d\n", 3 *1024);
  printf("12 + 14 = %d\n", 12 + 14);
  printf("12 - 14 = %d\n", 12 - 14);
  printf("24 / 6 = %d\n", 24 / 6);
  printf("24 / 5 = %f\n", 24.0 / 5.0);
  printf("24 mod 6 = %d\n", 24 % 6);
  printf("24 mod 5 = %d\n", 24 % 5);
  
  printf("Max. int: %d\n", INT_MAX);
  printf("Min. int: %d\n", INT_MIN);
  
  return 0;
}
