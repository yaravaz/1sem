#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, m, max = 0; bool bol = false;
	puts("Введите кол-во элементов первого массива: ");
	cin >> n;
	int* A = new int[n];
	puts("Введите n элементов массива А: ");
	for (int i = 0; i < n; i++) {
		cin >> *(A + i);
		if (max < *(A + i)) {
			max = *(A + i);
		}
	}
	puts("Введите кол-во элементов второго  массива: ");
	cin >> m;
	int* B = new int[m];
	puts("Введите m элементов массива B: ");
	for (int i = 0; i < m; i++) {
		cin >> *(B + i);
		if (*(B + i) == max) {
			bol = true;
		}
	}
	if (bol == true) {
		puts("Наибольший элемент массива А есть в массиве В");
	}
	else {
		puts("Наибольшего элемента массива А нет в массиве В");
	}
}
