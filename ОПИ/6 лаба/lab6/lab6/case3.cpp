#include "case3.h"
using namespace std;

void case3()
{
	char simb;
	printf("������� ������: ");
	cin >> simb;
	if (int(simb) >= 48 && int(simb) <= 57) {
		cout << "��� �������� �����: " << int(simb) << endl;
		system("pause");
		system("cls");
	}
		
	else
	{
		puts("���, ���-�� ����� �� ���...");
		puts("��������� ��� ������.\n");
		system("pause");
		system("cls");
	}
}
