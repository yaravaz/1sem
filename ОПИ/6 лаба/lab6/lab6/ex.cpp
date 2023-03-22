#include <iostream>
#include <windows.h>
#include "case1.h"
#include "case2.h"
#include "case3.h"
#include "case4.h"
#include "default.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Rus");
	system("color E6");
	char simb, numb; int num, count = 0;
	while (count == 0)
	{
		printf("1 - Разница для латиницы\n");
		printf("2 - Разница для кириллицы\n");
		printf("3 - Код введённой цифры\n");
		printf("4 - Выход\n");
		cin >> numb;
		if (int(numb) >= 48 && int(numb) <= 57)
		{
			num = numb - '0';
			switch (num)
			{
			case 1:
			{
				case1();
				break;
			}
			case 2:
			{
				case2();
				break;
			}
			case 3:
			{
				case3();
				break;
			}
			case 4:
			{
				case4();
				count++;
				break;
			}
			default:
			{
				def();
				break;
			}
			}
		}
		else
		{
			puts("Упс, что-то пошло не так...");
			puts("Введите число.\n");
			system("pause");
			system("cls");
			
		}
	}
}