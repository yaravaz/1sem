#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	float a, r, p, q;
	puts("������� ������: ");
	cin >> r;
	puts("������� ������ ���������: ");
	cin >> p;
	puts("������� ������ ���������: ");
	cin >> q;
	a = sqrt(pow(q / 2, 2) + pow(p / 2, 2));
	if (r <= (q / 2) * (p / 2) / a)
		puts("� ���� � ����������� p � q ����� ������� ���������� � �������� r");
	else 
		puts("� ���� � ����������� p � q ������ ������� ���������� � �������� r");
}