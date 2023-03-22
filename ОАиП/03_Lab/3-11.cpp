#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, s; int x;
	s = ' ';
	cout << "Введите номер задания";
	cin >> x;
	if (x == 1)
	{
		cout << "Введите символ =" << endl;
		cin >> c;
		cout << setw(40) << setfill(s) << s;
		cout << setw(10) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(10) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(10) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(10) << setfill(c) << c << endl;
		cout << setw(40) << setfill(s) << s;
		cout << setw(10) << setfill(c) << c << endl;
	}
	else if (x == 2)
	{
		int a; double s;
		scanf_s("%d", &a);
		s = pow(a / sqrt(2), 2);
		printf("%4.2f", s);
	}
}