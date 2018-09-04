#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "bubble.h"
using namespace std;
const int _size = 10;
int main()
{
	srand(time(NULL));
	ascendente d;
	descendente i;
	bubble *a = &d;
	int _list[_size];
	int *start;
	for (start = _list; start < _list + _size; start++) {
		*start = rand() % 1000;
		cout << " | " << *start;
	}
	cout << endl << endl;
	start = _list;
	int *_end = &_list[_size - 1];
	a->_sort(start, _end);

	for (start = _list; start < _list + _size; start++)
		cout << " | " << *start;
	cout << "\n";

	start = _list;
	_end = &_list[_size - 1];
	a = &i;
	a->_sort(start, _end);

	for (start = _list; start < _list + _size; start++)
		cout << " | " << *start;
}
