#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	int A, Zeros = 0, Ones = 0, n, A2, B, maskA = 1, maskB = 1, q, m; char tmp[33];

	//1 задание

	cout << "Задание 1\n" << "Введите число A ";
	cin >> A;

	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;

	while (A != 0) {
		if ((A & 1) == 0)
			Zeros++;
		else
			Ones++;
		A >>= 1;
	}

	cout << Ones - Zeros;

	//2 задание

	cout << "\n2 задание\n" << "Введите позицию n: ";
	cin >> n;

	cout << "Введите позицию q: ";
	cin >> q;

	cout << "Введите число A: ";
	cin >> A2;

	cout << "Введите число B: ";
	cin >> B;

	cout << "Введите количество битов: ";
	cin >> m;

	_itoa_s(A2, tmp, 2);
	cout << "A: " << tmp << endl;

	_itoa_s(B, tmp, 2);
	cout << "B: " << tmp << endl;

	for (int i = 0; i < 2; i++) {
		maskA = maskA << 1;
		maskA += 1;
	}
	maskA <<= n;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;

	for (int i = 0; i < m - 1; i++) {
		maskB = maskB << 1;
		maskB += 1;
	}
	maskB <<= q;
	_itoa_s(maskB, tmp, 2);
	cout << "maskB: " << tmp << endl;

	_itoa_s(A2 | maskA, tmp, 2);
	cout << "Результат для А: " << tmp << endl;

	_itoa_s(B | maskB, tmp, 2);
	cout << "Результат для B: " << tmp << endl;
}