#include <string>
using namespace std;

class Bruch
{
public:
	Bruch();
	Bruch(int z, int n);
	Bruch(int ganzzahl);
	void set(int z, int n);
	string toString();
	Bruch operator+(Bruch b);
	Bruch operator-(Bruch b);
	Bruch operator*(Bruch b);
	Bruch operator/(Bruch b);

private:
	int zaehler;
	int nenner;
	void kuerze();
};
