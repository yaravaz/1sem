#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, min;
	printf("¬ведите a: ");
	scanf_s("%d", &a);
	printf("¬ведите b: ");
	scanf_s("%d", &b);
	if (a <= b)
		min = a;
	else if (a > b)
		min = b;
	for (int i = min; i >= 1; i = i - 1)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			printf("%d", i);
			break;
		}
	}
}