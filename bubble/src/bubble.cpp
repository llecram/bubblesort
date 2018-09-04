#include "bubble.h"
bubble::bubble(){}

void bubble::_sort(int* start, int* end)
{
	bool change = true;
	while (change)
	{
		change = false;
		for (int* ptr = start; ptr < end; ++ptr)
		{
			if( op(ptr, (ptr + 1)))
			change = true;
		}

	}
}
bool bubble::_swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
	return true;
}
bool descendente::op(int* a, int* b)
{
	return (*a < *b) ? _swap(a, b) : false;
}
bool ascendente::op(int *a, int *b)
{
	return (*a > *b) ? _swap(a, b) : false;
}
