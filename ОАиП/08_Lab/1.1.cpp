#include <iostream>; //1вариант
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float n = 200, a = 1, b = 3; int r;
	float h, x, s, z;

	float s1 = 0, s2 = 0, i = 1;

	h = (b - a) / n;
	x = a;
	s = 0;
	while (x <= (b - h)) {
		s = s + h * (pow(x, 3) - 3 + pow(x + h, 3) - 3) / 2;
		x = x + h;
	}
		  cout << "»нтеграл, посчитанный методом трапеций, равен: " << s << endl;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) {
		s2 = s2 + pow(x, 3) - 3;
		x = x + h;
		s1 = s1 + pow(x, 3) - 3;
		x = x + h;
		i = i + 1;
	}
	z = h * (pow(a, 3) - 3 + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + pow(b, 3) - 3) / 3;

	cout << "»нтеграл, посчитанный методом парабол, равен: " << z << endl;
	return (0);
}