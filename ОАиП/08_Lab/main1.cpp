#include <iostream>;
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	float n = 200, a = 2, b = 3, h, x, s, z, s1 = 0, s2 = 0, i = 1;

	h = (b - a) / n;
	x = a;
	s = 0;

	while (x <= (b - h)) {
		s = s + h * (exp(x) - (1 / x) + exp(x + h) - (1 / (x + h))) / 2;
		x = x + h;
	}
	cout << "��������, ����������� ������� ��������, �����: " << s;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n) {
		s2 = s2 + exp(x) - (1 / x);
		x = x + h;
		s1 = s1 + exp(x) - (1 / x);
		x = x + h;
		i = i + 1;
	}
	z = h * (exp(a) - (1 / a) + 4 * (exp(a + h) - (1 / (a+h))) + 4 * s1 + 2 * s2 + exp(b) - (1 / b)) / 3;
	cout << "\n��������, ����������� ������� �������, �����: " << z << endl;

	return (0);
}