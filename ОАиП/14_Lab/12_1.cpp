#include <iostream>
#include <stdlib.h>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");
	int* arr;
	int n;
	const int rmx = 20;
	int max = 0, count = 0;
	puts("Введите размер массива: ");
	cin >> n;
	arr = (int*)malloc(n * sizeof(int));

	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % rmx;
		cout << arr[i] << "\t";
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			count++;
		}
	}
	cout << "\nКоличесво: " << count << endl;
	free(arr);
}