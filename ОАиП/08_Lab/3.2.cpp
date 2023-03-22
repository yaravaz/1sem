#include <iostream>;
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Rus");
	float a = 1, b = 1, x = 0, e = 0.0001, x1;

	if (((pow(a,3) + 3 * a - 1) * (3*pow(a,2) + 3)) > 0) {
		x1 = a;
	}
	else {
		x1 = b;
	}

	while (abs(x1 - x) > e) {
		x = x1;
		x1 = x - ((pow(x, 3) + 3 * x - 1) / (3 * pow(a, 2) + 3));
	}
	cout << "¬ычисление корней уравнени€ методом касательных: " << x1 << endl;

	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((pow(x, 3) + 3 * x - 1) * (pow(a, 3) + 3 * a - 1) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	}
	cout << "¬ычисление корней уравнени€ методом дихотомии: " << x << endl;
	system("pause");
}