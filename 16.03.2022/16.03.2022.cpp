#include <iostream>
#include "DZ5.h"
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	massiv* a = new massiv;
	std::cout << "кол-во строк\n";
	int lines;
	std::cin >> lines;
	a->set_n(lines);
	std::cout << "кол-во столбцов\n";
	int columns;
	std::cin >> columns;
	a->set_m(columns);
	a->memory();
	a->data();
	a->print();
	a->swap();
	a->print();
	a->del();
	return 0;
}