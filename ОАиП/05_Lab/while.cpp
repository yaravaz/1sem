#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	double y, z, j, b = 2.5, m = 3, a = 1.4 * pow(10, -3);
	// j = b(0.1)3
	j = b;
	while ( j < 3 )
	{
		y = (m * j) / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		printf("%5.2f\t", y);
		printf("%5.2f\n", z);
		j = j + 0.1;
	}
	return 0;
}