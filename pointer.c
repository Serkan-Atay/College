int main() {
  int feld[3];
  int* p;
  
  p = feld; // a ist zuflaessig
  //feld = p; // b nicht zuflaessig
  p = &feld[3];
  feld[2] = p[3];
  p[1] = feld[3];
  
  return 0;
}
