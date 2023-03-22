#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int i, count = 0, pos[10];
	printf("—колько чисел в последовательности? ");
	scanf_s("%d", &i);
	printf("¬водите числа ");
	for (int n = 0; n < i; n++)
		scanf_s("%d", &pos[n]);
	for (int n = 0; n < i; n++)
		if (pos[n] > 0 && pos[n + 1] < 0 || pos[n] < 0 && pos[n + 1] > 0)
			count++;
	printf("%d", count);
}