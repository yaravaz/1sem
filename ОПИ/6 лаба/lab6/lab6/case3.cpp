#include "case3.h"
using namespace std;

void case3()
{
	char simb;
	printf("Ââåäèòå ñèìâîë: ");
	cin >> simb;
	if (int(simb) >= 48 && int(simb) <= 57) {
		cout << "Êîä ââåä¸ííîé öèôğû: " << int(simb) << endl;
		system("pause");
		system("cls");
	}
		
	else
	{
		puts("Óïñ, ÷òî-òî ïîøëî íå òàê...");
		puts("Ïğîâåğüòå âàø ñèìâîë.\n");
		system("pause");
		system("cls");
	}
}
