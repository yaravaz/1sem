#include <iostream> 
using namespace std;
void main()
{
	int A, B, i = 0, p, n; unsigned int maskA = 1; char tmp[33];
	setlocale(LC_CTYPE, "Russian");

	//1 задание	

	cout << "Задание 1\n" << "Введите число A ";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;
	maskA << 10;
	for (int i = 0; i < 5; i++) {
		maskA = maskA << 1;
		maskA += 1;
	}

	_itoa_s(maskA, tmp, 2);
	cout << "mask: " << tmp << endl;
	A >>= 2;
	_itoa_s(A & maskA, tmp, 2);
	cout << "Результат: " << tmp << endl;

	//2 задание

	cout << "2 задание\n" << "Введите количество битов: ";
	cin >> n;

	cout << "Введите позицию: ";
	cin >> p;

	cout << "Введите число A: ";
	cin >> B;

	_itoa_s(B, tmp, 2);
	cout << "A: " << tmp << endl;

	maskA = 1;
	for (int i = 0; i < n - 1; i++) {
		maskA = maskA << 1;
		maskA += 1;
	}
	maskA <<= p;
	_itoa_s(maskA, tmp, 2);
	cout << "mask: " << tmp << endl;

	_itoa_s(B ^ maskA, tmp, 2);
	cout << "Результат: " << tmp << endl;
}