int main() {
  int *p1, *p2;
  int i;
  
  p1 = p2 +i;
  p1 = i + p2;
  //i = p1 * p2; // c nicht zulaessig
  i = p1 - p2;
  // i = p1 + p2;  // e nicht zuflaessig
  
  return 0;
}
