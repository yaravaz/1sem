#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int sum = 0, count;
	puts("������� ���������� ��������� ������������������: ");
	cin >> count;
	int *n = new int[count];
	puts("������� ����� ������������������: ");
	for (int i = 0; i < count; i++)
		cin >> n[i];
	for (int i = 1; i <= count; i++)
	{
		if (i % 2 == 0)
			sum += n[i-1];
	}
	cout << sum;
}