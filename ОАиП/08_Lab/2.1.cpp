#include <iostream>; //10вариант
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float n = 200, a = 4, b = 8;
	float h, x, s, z;

	float s1 = 0, s2 = 0, i = 1;

	h = (b - a) / n;
	x = a;
	s = 0;

	while (x <= (b - h)) {
		s = s + h * (pow((x), 2) - 4 + pow((x+h),2) - 4) / 2;
		x = x + h;
	}
	cout << "Интеграл, посчитанный методом трапеций, равен: " << s;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n) {
		s2 = s2 + (pow(x, 2) - 4);
		x = x + h;
		s1 = s1 + (pow(x, 2) - 4);
		x = x + h;
		i = i + 1;
	}
	z = h * (pow(a, 2) - 4 + 4 * (pow((a + h),2) - 4) + 4 * s1 + 2 * s2 + (pow(b, 2) - 4)) / 3;
	cout << "\nИнтеграл, посчитанный методом парабол, равен: " << z << endl;

	return (0);
}