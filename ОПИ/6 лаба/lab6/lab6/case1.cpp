#include "case1.h"
using namespace std;

void case1()
{
	char simb;
	printf("Введите символ: ");
	cin >> simb;
	if (int(simb) >= 65 && int(simb) <= 90)
	{
		cout << "Разница кодов " << simb << " и " << char(simb + 32) << " равна 32\n";
		system("pause");
		system("cls");
	}
		
	else if ((int(simb) >= 97 && int(simb) <= 122))
	{
		cout << "Разница кодов " << simb << " и " << char(simb - 32) << " равна 32\n";
		system("pause");
		system("cls");
	}
		
	else
	{
		puts("Упс, что-то пошло не так...");
		puts("Проверьте ваш символ.\n");
		system("pause");
		system("cls");
	}
}
