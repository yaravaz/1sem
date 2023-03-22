#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");

	const int rmx = 35;
	int n, m, count = 0, k = 0, sum = 0, counter = 0;

	cout << "n= ";
	cin >> n;
	cout << "m= ";
	cin >> m;

	int** arr = new int* [n];
	srand((unsigned)time(NULL));

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = -10 + rand() % rmx;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				k++;
				sum += arr[i][j];
			}	
		}
		if (k == m) {
			k = i;
			break;
		}
		else {
			sum = 0;
			k = 0;
			counter++;
		}
	}
	if (counter == n) {
		cout << "такой строки нет" << endl;
	}
	else {
		cout << k + 1 << " искомая строка" << endl;
		cout << sum << " искомая сумма" << endl;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] - sum << "\t";
		}
		cout << endl;
	}
	delete[] arr;
}