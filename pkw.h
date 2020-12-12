#include <string>
using std::string;

class Pkw
{
public:
	Pkw(string m, unsigned int l);
	string getMarke() const;
	void setMarke(string m);
	unsigned int getFgstnr() const;
	void setFgstnr(unsigned int fg);
	unsigned int getLeistung() const;
	void setLeistung(unsigned int l);
	bool operator<(Pkw b) const; // aufgabe 4.1

private:
	string marke;
	unsigned int fgstnr;
	unsigned int leistung;
	static unsigned int fgstnr_counter; // aufgabe 4.1
};
