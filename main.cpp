typedef struct bar_t {
	int x;
	int y;
} bar_t;

void foo(bar_t& b); // setzt den Wert von x und y auf 1 und 2
void foo(bar_t* b); // setzt den Wert von x und y auf 1 und 2

int main()
{
	bar_t a, b;
	foo(&a);
	foo(&b);

	return 0;
}

void foo(bar_t& b)
{
	b.x = 1;
	b.y = 2;
}

void foo(bar_t* b)
{
	b->x = 1;
	b->y = 2;
}
