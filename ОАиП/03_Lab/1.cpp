#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int t;
	char z;
	float x;
	double y;
	cout << "������� ����� t=" << endl;
	cin >> t;
	cout << "��e���� ������ z=" << endl;
	cin >> z;
	cout << "��e���� ����� y=" << endl;
	cin >> y;
	cout << "��e���� ����� x=" << endl;
	cin >> x;
	cout << "t=" << t << endl;
	cout << "z=" << z << endl;
	cout << "y=" << y << endl;
	cout << "x=" << x << endl;
	cout << "��� ������ � ������" << endl;
	cout << "int: " << sizeof(t) << endl;
	cout << "char: " << sizeof(z) << endl;
	cout << "float: " << sizeof(x) << endl;
	cout << "double: " << sizeof(y) << endl;

}