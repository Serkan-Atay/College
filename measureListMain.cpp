#include "list.h"
#include "measurement.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	list mlist;
	mlist.displayAll();
	
	unsigned short c;
	cout << "Wie viele Werte moechten Sie eingeben: ";
	cin >> c;
	long int input;
	for (int i = 0; i < c; i++)
	{
		cout << "Messwert " << i << ": ";
		cin >> input;
		measurement* mitem = new measurement(input);
		mlist.append(mitem);
	}

	mlist.displayAll();

	// print and delete list
	while (cell* curr = mlist.getNext())
	{
		curr->print();
		delete curr;
	}

	return 0;
}
