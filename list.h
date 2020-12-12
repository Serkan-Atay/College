#include "cell.h"

// basically a FIFO queue
class list
{
private:
	cell* first;
	cell* last;

public:
	list();
	void append(cell* item);
	cell* getNext();
	void displayAll() const;
};
