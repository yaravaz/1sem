#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int n[30], n1, s = 0;

	cout << "������� ���������� ����� � ����: ";
	cin >> n1;
	puts("������� ������������������ ");
	for (int i = 0; i < n1; i++)
	{
		cin >> n[i];
		if (n[i] < 0)
		{
			cout << "����� ������� �������������� �����: " << i + 1;
			s = 1;
		}
	}
	if (s != 1)
	{
		cout << "��� ������������� �����";
	}

}