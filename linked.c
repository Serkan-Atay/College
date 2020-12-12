#include <stdio.h>
struct preis{
  float brutto;
  float netto;
};

void tausch (struct preis *p1, struct preis *p2) {
  //printf("%f\n", (*p1).brutto);
  
  struct preis temp;
  temp.brutto = (*p1).brutto;
  temp.netto = (*p1).netto;
    
  (*p1).brutto = (*p2).brutto;
  (*p1).netto = (*p2).netto;
  
  (*p2).brutto = temp.brutto;
  (*p2).netto = temp.netto;
}

void printpreis(struct preis *p) {
  printf("Brutto: %f\n", (*p).brutto);
  printf("Netto: %f\n", (*p).netto);
}

int main() {
  struct preis preis1 = {1.1, 2.2};
  struct preis preis2 = {3400, 1234.56};
  struct preis *p1 = &preis1;
  struct preis *p2 = &preis2;
  
  tausch(p1, p2);
  
  printf(">> preis1 <<\n");
  printpreis(p1);
  printf("\n>> preis2 <<\n");
  printpreis(p2);
  
  return 0;
}
