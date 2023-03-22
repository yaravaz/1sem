#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	double a = 1.5, v[5], b = -4.15, w = 0;
	v[0] = 1;
	v[1] = 1.5;
	v[2] = -4;
	v[3] = -1.9;
	v[4] = 3;
	for (int i = 0; i < 5; i++)
	{
		if (v[i] > 0)
			w = a + v[i];
		else if (v[i] <= 0)
			w = b / v[i];
		cout << " w[" << i << "]= " << w << endl;
	}
}