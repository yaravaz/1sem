#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color E6");

	char simbol, main_number; int number, boolean = 0; const int DIFFERENCE_OF_REGISTER = 32;
	const char NUMBER_LOWER_LIMIT = 48, NUMBER_UPPER_LIMIT = 57;
	const char TERMINATOP = '0'; 
	const char FIRST_LOWER_LIMIT = 65, FIRST_UPPER_LIMIT = 90;
	const char SECOND_LOWER_LIMIT = 97, SECOND_UPPER_LIMIT = 122;
	const char THIRD_LOWER_LIMIT = -64, THIRD_UPPER_LIMIT = -33;
	const char FOURTH_LOWER_LIMIT = -32, FOURTH_UPPER_LIMIT = -1;

	while (boolean == 0)
	{
		printf("1 - ������� ��� ��������\n");
		printf("2 - ������� ��� ���������\n");
		printf("3 - ��� �������� �����\n");
		printf("4 - �����\n");
		cin >> main_number;
		if (int(main_number) >= NUMBER_LOWER_LIMIT && int(main_number) <= NUMBER_UPPER_LIMIT)
		{
			number = main_number - TERMINATOP;
			switch (number)
			{
			case 1:
			{
				printf("������� ������: ");
				cin >> simbol;
				if (int(simbol) >= FIRST_LOWER_LIMIT && int(simbol) <= FIRST_UPPER_LIMIT)
				{
					cout << "������� ����� " << simbol << " � " << char(simbol + DIFFERENCE_OF_REGISTER) << " ����� 32\n";
					system("pause");
					system("cls");
				}

				else if ((int(simbol) >= SECOND_LOWER_LIMIT && int(simbol) <= SECOND_UPPER_LIMIT))
				{
					cout << "������� ����� " << simbol << " � " << char(simbol - DIFFERENCE_OF_REGISTER) << " ����� 32\n";
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
				break;
			}
			case 2:
			{
				printf("������� ������: ");
				cin >> simbol;
				if (int(simbol) >= THIRD_LOWER_LIMIT && int(simbol) <= THIRD_UPPER_LIMIT) {
					cout << "������� ����� " << simbol << " � " << char(simbol + DIFFERENCE_OF_REGISTER) << " ����� 32\n";
					system("pause");
					system("cls");
				}

				else if ((int(simbol) >= FOURTH_LOWER_LIMIT && int(simbol) <= FOURTH_UPPER_LIMIT)) {
					cout << "������� ����� " << simbol << " � " << char(simbol - DIFFERENCE_OF_REGISTER) << " ����� 32\n";
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
				break;
			}
			case 3:
			{
				printf("������� ������: ");
				cin >> simbol;
				if (int(simbol) >= NUMBER_LOWER_LIMIT && int(simbol) <= NUMBER_UPPER_LIMIT) {
					cout << "��� �������� �����: " << int(simbol) << endl;
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
				break;
			}
			case 4:
			{
				puts("������� �� ��������");
				boolean++;
				break;
			}
			default:
			{
				puts("���, ���-�� ����� �� ���...");
				puts("��������� ��� ������.\n");
				system("pause");
				system("cls");
				break;
			}
			}
		}
		else
		{
			puts("���, ���-�� ����� �� ���...");
			puts("������� �����.\n");
			system("pause");
			system("cls");

		}
	}
}