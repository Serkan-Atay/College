#include "list.h"
#include <iostream>

list::list()
{
	first = last = NULL;
}

void list::append(cell* item)
{
	if (first == NULL) first = item;
	if (last != NULL) last->next = item;
	last = item;
}

cell* list::getNext()
{
	if (first == NULL) return NULL;
	cell* to_return = first;
	first = first->next;
	return to_return;
}

void list::displayAll() const
{
	cell* curr = first;
	while (curr != NULL)
	{
		curr->print();
		curr = curr->next;
	}
}
