#include <iostream>
using namespace std;

class CAmpel
{
public:
	CAmpel();
	void operator++();
	bool verbinde(CAmpel* ca);
	void reset();
	friend ostream& operator<<(ostream& out, CAmpel a);

private:
	int zustand;
	bool verbunden;
	CAmpel* verbindung;
	void schalte();
};
