#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");
	int* arr;
	int n, min=10, sum = 0, k, count = 0, count2 = 0;
	const int rmx = 20;

	puts("Введите размер массива: ");
	cin >> n;
	arr = (int*) malloc(n * sizeof(int)); 

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = -10 + rand() %  rmx;
		cout << arr[i] << "\t";
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] < 0)
			count2++;
	}
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] < 0 && count == 0 && count2 > 1) {
			k = i + 1;
			while (arr[k] >= 0) {
				sum += arr[k];
				k++;
			}
			count = 1;
		}
	}
	cout << "\nНаименьший элемент: " << min << endl;
	cout << "Сумма: " << sum;
	free(arr);
}