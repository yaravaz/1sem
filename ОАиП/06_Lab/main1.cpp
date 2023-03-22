#include <iostream>
using namespace std;

int main() 
{
	double y = 2.7, a = -5.5 * pow(10, -4), j[4], x, z;
	j[0] = 2.7;
	j[1] = -8.2;
	j[2] = 15.4;
	j[3] = 2;
	for (int i = 0; i < 4; i++)
	{
		x = pow(cos(y), 2) / (j[i] + (2 * a * y));
		if (x >= sqrt(y))
			z = exp(-j[i]);
		else if (x < sqrt(y))
			z = pow((0.5 * y / j[i]), 2);
		cout << "x= " << x << " z= " << z << endl;
	}
}