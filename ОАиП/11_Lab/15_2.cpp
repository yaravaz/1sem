#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n = 0, m = 0, max = 0; bool bol = false;
	puts("Введите размер первого массива: ");
	cin >> n;
	int* F = new int[n];
	puts("Введите элементы массива F: ");
	for (int i = 0; i < n; i++) {
		cin >> *(F + i);
		if (max < *(F + i)) {
			max = *(F + i);
		}
	}
	puts("Введите размер второго массива: ");
	cin >> m;
	int* D = new int[m];
	puts("Введите элементы массива D: ");
	for (int i = 0; i < m; i++) {
		cin >> *(D + i);
		if (max == *(D + i)) {
			bol = true;
		}
	}
	if (bol == true)
		puts("Наибольший элемент массива F есть в массиве D");
	else
		puts("Наибольшего элемента массива F нет в массиве D");
}