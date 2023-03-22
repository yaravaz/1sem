#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char simb; int num;
	printf("1 - Определение разницы кодов буквы в прописном и строчном написании для латиницы\n");
	printf("2 - Определение разницы кодов буквы в прописном и строчном написании для кириллицы\n");
	printf("3 - Код введённой цифры\n");
	printf("4 - Выход\n");
	cin >> num;
	switch (num)
	{
	case 1:
	{
		printf("Введите символ: ");
		cin >> simb;
		if (int(simb) >= 65 && int(simb) <= 90)
			cout << "Разница кодов " << simb << " и " << char(simb + 32) << " равна 32";
		else if ((int(simb) >= 97 && int(simb) <= 122))
			cout << "Разница кодов " << simb << " и " << char(simb - 32) << " равна 32";
		else
		{
			puts("Упс, что-то пошло не так...");
			puts("Проверьте ваш символ.");
		}

		break;
	}
	case 2:
	{
		printf("Введите символ: ");
		cin >> simb;
		if (int(simb) >= -64 && int(simb) <= -33)
			cout << "Разница кодов " << simb << " и " << char(simb + 32) << " равна 32";
		else if ((int(simb) >= -32 && int(simb) <= -1))
			cout << "Разница кодов " << simb << " и " << char(simb - 32) << " равна 32";
		else
		{
			puts("Упс, что-то пошло не так...");
			puts("Проверьте ваш символ.");
		}
		break;
	}
	case 3:
	{
		printf("Введите символ: ");
		cin >> simb;
		if (int(simb) >= 48 && int(simb) <= 57)
			cout << "Код введённой цифры: " << int(simb);
		else
		{
			puts("Упс, что-то пошло не так...");
			puts("Проверьте ваш символ.");
		}
		break;
	}
	case 4:
	{
		puts("Спасибо за внимание");
		break;
	}
	default:
	{
		puts("Упс, что-то пошло не так...");
		puts("Проверьте ваш символ.");
		break;
	}
	}

}