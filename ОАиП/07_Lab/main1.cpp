#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_CTYPE, "Rus");
	double k = 6, a[6], f, g = 0; 
	a[1] = 2.3;
	a[2] = 7;
	a[3] = -2;
	a[4] = -4;
	a[5] = 9;
	while (k <= 7.1)
	{
		f = k;
		for (int i = 1; i <= 5; i++)
		{
			g = g + (a[i] / i);
		}
		g = f / g;
		cout << "f = " << f;
		cout << "  g = " << g << endl;
		k += 0.2;
	}
}