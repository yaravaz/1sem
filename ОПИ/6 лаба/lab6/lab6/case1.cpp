#include "case1.h"
using namespace std;

void case1()
{
	char simb;
	printf("������� ������: ");
	cin >> simb;
	if (int(simb) >= 65 && int(simb) <= 90)
	{
		cout << "������� ����� " << simb << " � " << char(simb + 32) << " ����� 32\n";
		system("pause");
		system("cls");
	}
		
	else if ((int(simb) >= 97 && int(simb) <= 122))
	{
		cout << "������� ����� " << simb << " � " << char(simb - 32) << " ����� 32\n";
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
