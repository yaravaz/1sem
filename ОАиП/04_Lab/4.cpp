#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, p, q, r, s;
	puts("Введите размер застройки: ");
	scanf_s("%d%d", &a, &b);
	puts("Введите размер первого дома: ");
	scanf_s("%d%d", &p, &q);
	puts("Введите размеры второго дома: ");
	scanf_s("%d%d", &r, &s);
	if ((((a >= (p + r)) && (b >= q && b >= s))) ||
        (((a >= (p + s)) && (b >= q && b >= r))) ||
        (((a >= (q + r)) && (b >= p && b >= s))) ||
        (((a >= (q + s)) && (b >= p && b >= r))))
        puts("Можно построить 2 дома");
    else
        puts("Нельзя построить 2 дома");

}