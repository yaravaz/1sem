#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int t;
	char z;
	float x;
	double y;
	cout << "¬ведите число t=" << endl;
	cin >> t;
	cout << "¬вeдите символ z=" << endl;
	cin >> z;
	cout << "¬вeдите дробь y=" << endl;
	cin >> y;
	cout << "¬вeдите дробь x=" << endl;
	cin >> x;
	cout << "t=" << t << endl;
	cout << "z=" << z << endl;
	cout << "y=" << y << endl;
	cout << "x=" << x << endl;
	cout << "“ип –азмер в байтах" << endl;
	cout << "int: " << sizeof(t) << endl;
	cout << "char: " << sizeof(z) << endl;
	cout << "float: " << sizeof(x) << endl;
	cout << "double: " << sizeof(y) << endl;

}