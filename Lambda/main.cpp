#include <iostream>
#include <Windows.h>
#include "Array.h"
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Array a(10, [](int i){return (i)?1./i:0.0;});
	a.show();
	Array b(5, [](int i){return 0.;});
	b.show();
	double xMin;
	double xMax;
	cin >> xMin >> xMax;
	int n = 5;
	Array c(n, [&n, &xMin, &xMax](int i){return (xMax-xMin)/(n-1)*i+xMin;});
	c.show();
	srand(time(0));
	Array d(n, [](int){return rand()%11;});
	d.show();
	d.sort([](double a, double b){return b-a;});
	d.show();
	system("pause");
}