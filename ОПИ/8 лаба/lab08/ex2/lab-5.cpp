#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char simb; int num;
	printf("1 - ����������� ������� ����� ����� � ��������� � �������� ��������� ��� ��������\n");
	printf("2 - ����������� ������� ����� ����� � ��������� � �������� ��������� ��� ���������\n");
	printf("3 - ��� �������� �����\n");
	printf("4 - �����\n");
	cin >> num;
	switch (num)
	{
	case 1:
	{
		printf("������� ������: ");
		cin >> simb;
		if (int(simb) >= 65 && int(simb) <= 90)
			cout << "������� ����� " << simb << " � " << char(simb + 32) << " ����� 32";
		else if ((int(simb) >= 97 && int(simb) <= 122))
			cout << "������� ����� " << simb << " � " << char(simb - 32) << " ����� 32";
		else
		{
			puts("���, ���-�� ����� �� ���...");
			puts("��������� ��� ������.");
		}

		break;
	}
	case 2:
	{
		printf("������� ������: ");
		cin >> simb;
		if (int(simb) >= -64 && int(simb) <= -33)
			cout << "������� ����� " << simb << " � " << char(simb + 32) << " ����� 32";
		else if ((int(simb) >= -32 && int(simb) <= -1))
			cout << "������� ����� " << simb << " � " << char(simb - 32) << " ����� 32";
		else
		{
			puts("���, ���-�� ����� �� ���...");
			puts("��������� ��� ������.");
		}
		break;
	}
	case 3:
	{
		printf("������� ������: ");
		cin >> simb;
		if (int(simb) >= 48 && int(simb) <= 57)
			cout << "��� �������� �����: " << int(simb);
		else
		{
			puts("���, ���-�� ����� �� ���...");
			puts("��������� ��� ������.");
		}
		break;
	}
	case 4:
	{
		puts("������� �� ��������");
		break;
	}
	default:
	{
		puts("���, ���-�� ����� �� ���...");
		puts("��������� ��� ������.");
		break;
	}
	}

}