#include <stdio.h>
#include <unistd.h>

int main() {
  int s = 1;
  while (1 == 1) {
    printf("a");
    sleep(s);
  }
}
