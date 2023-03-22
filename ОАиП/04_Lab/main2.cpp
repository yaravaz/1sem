#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int a;
	printf("Введите номер месяца: "); scanf_s("%d", &a);
	if (a >= 3 && a <= 5)
		printf("Весна");
	else if (a >= 6 && a <= 8)
		printf("Лето");
	else if (a >= 9 && a <= 11)
		printf("Осень");
	else
		printf("Зима");
}