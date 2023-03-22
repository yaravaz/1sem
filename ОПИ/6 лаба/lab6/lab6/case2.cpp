#include "case2.h"
using namespace std;

void case2()
{
	char simb;
	printf("Введите символ: ");
	cin >> simb;
	if (int(simb) >= -64 && int(simb) <= -33) {
		cout << "Разница кодов " << simb << " и " << char(simb + 32) << " равна 32\n";
		system("pause");
		system("cls");
	}
		
	else if ((int(simb) >= -32 && int(simb) <= -1)) {
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
