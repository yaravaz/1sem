#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int n[30], n1, s = 0;

	cout << "Введите количество чисел в ряду: ";
	cin >> n1;
	puts("Введите последовательность ");
	for (int i = 0; i < n1; i++)
	{
		cin >> n[i];
		if (n[i] < 0)
		{
			cout << "Номер первого отрицательного числа: " << i + 1;
			s = 1;
		}
	}
	if (s != 1)
	{
		cout << "Нет отрицательных чисел";
	}

}