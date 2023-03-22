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
		cout << "Введите символ =" << endl;
		cin >> c;
		cout << setw(41) << setfill(s) << s;
		cout << setw(2) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(2) << setfill(c) << c << endl;
	}
	else if (x == 2)
	{
		int a, b, buf;
		scanf_s("%d%d", &a, &b);
		buf = a;
		a = b;
		b = buf;
		printf("%d%d", a, b);
	}
	else if (x == 3)
	{
		int c, d;
		scanf_s("%d%d", &c, &d);
		c ^= d ^= c ^= d;
		printf("%d%d", c, d);
	}
}