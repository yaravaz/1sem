#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Rus");
	int sum = 0, count = 0, prod = 1, k = 0, n[30];
	puts("Введите количество элементов последовательности: ");
	cin >> count;
	puts("Введите числа последовательности: ");
	for (int i = 0; i < count; i++)
	{
		cin >> n[i];
		if (n[i] < 0)
		{
			prod *= n[i];
			k = 1;
		}	
		else if (n[i] > 0)
			sum += n[i];
	}
	if (k == 0)
	{
		cout << "Cумма положительный чисел: " << sum << endl;
		cout << "Произведение отрицательных чисел: 0" << endl;
	}
	else
	{
		cout << "Cумма положительный чисел: " << sum << endl;
		cout << "Произведение отрицательных чисел: " << prod << endl;
	}
	
}