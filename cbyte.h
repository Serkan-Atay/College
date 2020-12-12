#include <iostream>
using namespace std;

class CByte {
public:
	CByte();
	CByte(int x);
	int get(int i) const;
	void set(int i, int v);
	int dezimal() const;
	CByte operator&(CByte b) const;
	CByte operator|(CByte b) const;
	CByte operator^(CByte b) const;
	CByte operator!() const;
	friend ostream& operator<<(ostream& os, CByte b);
	friend istream& operator>>(istream& is, CByte& b);

private:
	bool value[8];

};
