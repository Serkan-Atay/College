#include <ostream>
using namespace std;

class CByte {
private:
    unsigned short int bit[8];
    
public:
    CByte();
    CByte(int x);
    void eingabe();
    void ausgabe();
    unsigned short dezimal();
    CByte operator!();
    int get(unsigned short int pos);
    void set(unsigned short int pos, int wert);
};

CByte operator*(CByte a, CByte b);
CByte operator+(CByte a, CByte b);

ostream& operator<<(ostream& os, CByte cb);
