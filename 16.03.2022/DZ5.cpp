#include "DZ5.h"

void massiv::set_n(int lines)
{
	n = lines;
}

int massiv::get_n()
{
	return n;
}

void massiv::set_m(int columns)
{
	m = columns;
}

int massiv::get_m()
{
	return m;
}

void massiv::memory()
{
	arr = new double* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new double[m];
	}
}


void massiv::print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << arr[i][j] << " " ;
		}
		std::cout << std::endl;
	}
}

void massiv::data()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand()%100;
		}
	}
}

void massiv::del()
{
	for (int i = 0; i < n; i++)
	{
		delete [] (arr[i]);
	}
	delete[] (arr);
}

void massiv::swap()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m-1; j+=2)
		{
			int x = 0;
			x = arr[i][j];
			arr[i][j] = arr[i][j+1];
			arr[i][j + 1] = x;
		}
	}
}
