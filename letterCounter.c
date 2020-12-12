#include <stdio.h>

int main() {
  char text[300];
  char letter;
  int i = 0;
  int counter = 0;
  
  printf("Geben Sie bitte einen Text ein: ");
  //scanf("%s", text);
  fgets(text, 300, stdin);
  
  printf("Geben Sie einen Buchstaben ein: ");
  do {
    letter = getchar();
  } while (letter == '\n');
  
  while (text[i] != '\0') {
    if (text[i] == letter) counter++;
    i++;
  }
  
  printf("In diesem Text kommt der Buchstabe %c %d mal vor\n", letter, counter);
  
  return(0);
}
