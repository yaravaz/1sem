#include <iostream> 
using namespace std;
void main()
{
	int A, N, B, A2, i = 0, maskA = 1, m, n; char tmp[33];
	setlocale(LC_CTYPE, "Russian");

	//1 �������	

	cout << "������� 1\n" << "������� ����� A ";
	cin >> A;
	N = A;

	while (N > 1)
	{
		N = N / 2;
		i++;
	}
	i++;
	_itoa_s(A, tmp, 2);
	cout << "A: " << tmp << endl;

	if (i % 2 == 0) {
		for (int j = 1; j < i - 1; j += 2) {
			maskA = maskA << 2;
			maskA += 1;
		}
	}
	else {
		for (int j = 1; j < i - 2; j += 2) {
			maskA = maskA << 2;
			maskA += 1;
		}
	}
	maskA <<= 1;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA: " << tmp << endl;

	_itoa_s(A | maskA, tmp, 2);
	cout << "���������: " << tmp << endl;

	//2 �������

	cout << "2 �������\n";

	cout << "������� ������� n: ";
	cin >> n;

	cout << "������� ����� A: ";
	cin >> A2;

	cout << "������� ������� m: ";
	cin >> m;

	cout << "������� ����� B: ";
	cin >> B;

	_itoa_s(A2, tmp, 2); cout << "����� A: " << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "����� B: " << tmp << endl;
	int unsigned maskB = 7 << m;
	maskB = ~maskB;
	B = (B & maskB) | ((A2 & (7 << n)) >> n) << m;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
}