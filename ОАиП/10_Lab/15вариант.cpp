#include <iostream> 
using namespace std;
void main()
{
	int A, B, i = 0, mask = 1, p, n; char tmp[33];
	setlocale(LC_CTYPE, "Russian");

	//1 �������	

	cout << "������� 1\n" << "������� ����� A ";
	cin >> A;
	if ((A & 1) == 0)
		cout << "����� ������ 2" << endl;
	else
		cout << "����� �� ������ 2" << endl;

	//2 �������

	cout << "2 �������\n" << "������� ���������� �����: ";
	cin >> n;

	cout << "������� �������: ";
	cin >> p;

	cout << "������� ����� A: ";
	cin >> B;

	_itoa_s(B, tmp, 2);
	cout << "A: " << tmp << endl;

	mask <<= 16;

	for (int i = 0; i < n; i++) {
		mask = mask << 1;
		mask += 1;
	}
	mask <<= p;
	_itoa_s(mask, tmp, 2);
	cout << "mask: " << tmp << endl;

	_itoa_s(B & ~mask, tmp, 2);
	cout << "���������: " << tmp << endl;
}