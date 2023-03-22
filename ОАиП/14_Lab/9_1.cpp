#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");
	double* arr;
	int n;
	const int rmx = 400;
	double min = 10, sum = 0, pr = 1;
	puts("Введите размер массива: ");
	cin >> n;
	arr = (double*)malloc(n * sizeof(double));

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = 0.01 *( -200 + rand() % rmx);
		cout << arr[i] << "\t";
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > 0)
			pr *= arr[i];

	}
	int i = 0;
	while (arr[i] != min) {
		sum += arr[i];
		i++;
	}
	cout << "\nНаименьший элемент: " << min << endl;
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << pr;
	free(arr);
}