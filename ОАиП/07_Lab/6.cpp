#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int sum = 0, count = 0, prod = 1, k = 0, n[30];
	puts("������� ���������� ��������� ������������������: ");
	cin >> count;
	puts("������� ����� ������������������: ");
	for (int i = 0; i < count; i++)
	{
		cin >> n[i];
		if (n[i] < 0)
		{
			prod *= n[i];
			k = 1;
		}	
		else if (n[i] > 0)
			sum += n[i];
	}
	if (k == 0)
	{
		cout << "C���� ������������� �����: " << sum << endl;
		cout << "������������ ������������� �����: 0" << endl;
	}
	else
	{
		cout << "C���� ������������� �����: " << sum << endl;
		cout << "������������ ������������� �����: " << prod << endl;
	}
	
}