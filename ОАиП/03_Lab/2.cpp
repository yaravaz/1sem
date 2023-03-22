#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; 
	space = ' ';
	cout << "Введите символ =" << endl;
	cin >> c;
	cout << setw(39) << setfill(space) << space;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(37) << setfill(space) << space;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(35) << setfill(space) << space;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(space) << space;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(space) << space;
	cout << setw(14) << setfill(c) << c << endl;
}
