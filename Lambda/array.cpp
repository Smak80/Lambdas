#include "Array.h"
#include <iostream>

Array::Array(int n, std::function<double(int)> generator): n(n)
{
	a = new double[n];
	for (int i=0; i<n; i++)
	{
		a[i] = generator(i);
	}
}

void Array::show()
{
	for (int i = 0; i<n; i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void Array::sort(std::function<int (double a, double b)> comparator)
{
	for (int i = 0; i<n-1; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (comparator(a[i],a[j])>0)
			{
				std::swap(a[i],a[j]);
			}
		}
	}
}

Array::~Array()
{
	delete[] a;
}
