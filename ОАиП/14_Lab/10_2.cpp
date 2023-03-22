#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");

	const int rmx = 30;
	int n, m, count = 0, k = 0, elem = 0, counter = 0;

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
			arr[i][j] = -20 + rand() % rmx;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] < 0) {
				k++;
				elem = arr[i][0];
			}
		}
		if (k == m) {
			k = i;
			break;
		}
		else {
			elem = 0;
			k = 0;
			counter++;
		}
	}
	if (counter == n) {
		cout << "такой строки нет" << endl;
	}
	else {
		cout << k + 1 << " искомая строка" << endl;
		cout << elem << " первый элемент строки" << endl;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] + elem << "\t";
		}
		cout << endl;
	}
	delete[] arr;
}