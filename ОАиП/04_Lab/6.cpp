#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, c, r, s, t;
	puts("Введите размеры коробки: ");
	scanf_s("%d%d%d", &a, &b, &c);
	puts("Введите размеры посылки: ");
	scanf_s("%d%d%d", &r, &s, &t);
	if ((a <= r && b <= s && c <= t) ||
		(a <= r && b <= t && c <= s) ||
		(a <= s && b <= r && c <= t) ||
		(a <= s && b <= t && c <= r) ||
		(a <= t && b <= r && c <= s) ||
		(a <= t && b <= s && c <= r))
		puts("Посылка влазит в коробку");
	else
		puts("Посылка не влазит в коробку");
}