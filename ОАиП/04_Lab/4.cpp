#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int a, b, p, q, r, s;
	puts("������� ������ ���������: ");
	scanf_s("%d%d", &a, &b);
	puts("������� ������ ������� ����: ");
	scanf_s("%d%d", &p, &q);
	puts("������� ������� ������� ����: ");
	scanf_s("%d%d", &r, &s);
	if ((((a >= (p + r)) && (b >= q && b >= s))) ||
        (((a >= (p + s)) && (b >= q && b >= r))) ||
        (((a >= (q + r)) && (b >= p && b >= s))) ||
        (((a >= (q + s)) && (b >= p && b >= r))))
        puts("����� ��������� 2 ����");
    else
        puts("������ ��������� 2 ����");

}