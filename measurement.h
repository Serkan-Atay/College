#include "cell.h"

class measurement : public cell
{
private:
	long int messwert;

public:
	measurement(long int m);
	void print();
};
