#pragma once

class cell
{
protected:
	cell();
	cell* next;

public:
	virtual void print() = 0;
	friend class list;
};
