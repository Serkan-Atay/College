#include <string>
using namespace std;

class Bruch {
public:
    Bruch();
    Bruch(int zahl);
    Bruch(int zaehler, int nenner);
    
//    void eingabe();
    void eingabe(int z, int n);
//    void ausgabe();
    string ausgabe();
    Bruch add(Bruch summand);
    Bruch sub(Bruch subtrahend);
    Bruch mul(Bruch faktor);
    Bruch div(Bruch dividend);
    
private:
    int zaehler;
    int nenner;
    void kuerze();
};
