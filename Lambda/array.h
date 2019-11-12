#pragma once
#include <functional>

class Array
{
	double* a;
	int n;
public:
	Array(int n, std::function<double (int)> generator);
	void show();
	void sort(std::function<int (double a, double b)> comparator);
	~Array();
};

