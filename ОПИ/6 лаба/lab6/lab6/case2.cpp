#include "case2.h"
using namespace std;

void case2()
{
	char simb;
	printf("������� ������: ");
	cin >> simb;
	if (int(simb) >= -64 && int(simb) <= -33) {
		cout << "������� ����� " << simb << " � " << char(simb + 32) << " ����� 32\n";
		system("pause");
		system("cls");
	}
		
	else if ((int(simb) >= -32 && int(simb) <= -1)) {
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
