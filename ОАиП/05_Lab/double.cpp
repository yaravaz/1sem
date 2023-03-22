#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	double b = 2.5, a = 1.4 * pow(10, -3), y, z, i, j, m;
	// m = {7.3, -2, 0.8}
	// y = {0.3, 1, 0.7, 4}
	for (int i = 1; i <= 3; i++)
	{
		printf("¬ведите m ");
		scanf_s("%f", &m);
		for (int j = 1; j <= 4; j++)
		{
			printf("¬ведите y ");
			scanf_s("%f", &y);
			y = (m * j) / tan(a) - exp(10 * m);
			z = 2 * y * b + sqrt(a + b);
			printf("%5.2f\t", y);
			printf("%5.2f\n", z);
		}
	}
}