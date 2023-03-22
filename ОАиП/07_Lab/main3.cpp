#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	double n = 5, x[6], a = 0, b = 1;
	x[1] = 2.7;
	x[2] = -5;
	x[3] = 4;
	x[4] = 3.5;
	x[5] = -7;
	for (int i = 1; i <= n; i++)
	{
		a += x[i];
		b *= x[i];
	}
	cout << "a= " << a << " b= " << b;
}