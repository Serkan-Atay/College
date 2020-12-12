#include "measurement.h"
#include <iostream>
using std::cout;
using std::endl;

measurement::measurement(long int m)
{
	messwert = m;
}

void measurement::print()
{
	cout << "Messwert: " << messwert << endl;
}
