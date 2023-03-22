#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");
	double* arr;
	int n;
	const int rmx = 400;
	double min = 10, max = 0, sum = 0, pr = 1, index_max = 0, index_min = 0;
	puts("Введите размер массива: ");
	cin >> n;
	arr = (double*)malloc(n * sizeof(double));

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = 0.01 * (-200 + rand() % rmx);
		cout << arr[i] << "\t";
		if (abs(arr[i]) < min) {
			min = abs(arr[i]);
			index_min = i;
		}
		if (abs(arr[i]) > max) {
			max = abs(arr[i]);
			index_max = i;
		}
		if (arr[i] > 0)
			sum += arr[i];

	}
	int i = 0;
	if (index_max + 1 == index_min || index_min + 1 == index_max)
		pr = 0;
	if (index_min > index_max) {
		i = index_max + 1;
		while (i != index_min) {
			pr *= arr[i];
			i++;
		}
	}
	else {
		i = index_min + 1;
		while (i != index_max) {
			pr *= arr[i];
			i++;
		}
	}
	cout << endl;
	cout << "Наименьший элемент " << min << endl;
	cout << "Наибольший элемент " << max << endl;
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << pr;
	free(arr);
}