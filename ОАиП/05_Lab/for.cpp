#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	double b = 2.5, m = 3, a = 1.4 * pow(10, -3), j, y, z;
	// j = {0.7, -2, 2.9}
	for (int n = 1; n <= 3; n++)
	{
		printf("¬ведите j ");
		scanf_s("%f", &j);
		y = (m * j) / tan(a) - exp(10 * m);
		z = 2 * y * b + sqrt(a + b);
		printf("%5.2f\t", y);
		printf("%5.2f\n", z);
	}
}