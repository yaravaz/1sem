#include <iostream>

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int a;
	printf("������� ����� ������: "); scanf_s("%d", &a);
	if (a >= 3 && a <= 5)
		printf("�����");
	else if (a >= 6 && a <= 8)
		printf("����");
	else if (a >= 9 && a <= 11)
		printf("�����");
	else
		printf("����");
}