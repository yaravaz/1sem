#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, s; int x;
	s = ' ';
	cout << "Введите номер задания ";
	cin >> x;
	if (x == 1)
	{
	cout << "Введите символ ";
	cin >> c;
	cout << setw(39) << setfill(s) << s;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(36) << setfill(s) << s;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(s) << s;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(34) << setfill(s) << s;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(34) << setfill(s) << s;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(36) << setfill(s) << s;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(39) << setfill(s) << s;
	cout << setw(4) << setfill(c) << c << endl; 
	}
	else if (x == 2)
	{
		int x, y, z; double a, g;
		scanf_s("%d%d%d", &x, &y, &z);
		a = (x + y + z) / 3;
		g = pow(x * y * z, 0.33);
		printf("%5.2f%5.2f", a, g);
	}
}