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
		cout << setw(1) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(39) << setfill(s) << s;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(1) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(3) << setfill(c) << c << endl;
		cout << setw(39) << setfill(s) << s;
		cout << setw(5) << setfill(c) << c << endl;
		cout << setw(38) << setfill(s) << s;
		cout << setw(7) << setfill(c) << c << endl;
		cout << setw(37) << setfill(s) << s;
		cout << setw(9) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(1) << setfill(c) << c << endl;
		cout << setw(41) << setfill(s) << s;
		cout << setw(1) << setfill(c) << c << endl;
	}
	else if (x == 2)
	{ 
	int a, n, s;
	scanf_s("%d", &n);
	a = (2 * n + 2) / n;
	s = 2 * pow(a, 2);
	printf("%d", s);
	}
	
}