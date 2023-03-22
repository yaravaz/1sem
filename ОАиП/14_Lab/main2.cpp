#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");

	const int rmx = 20;
	int n, m, count = 0, k = 0;

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
			arr[i][j] = rand() % rmx;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (arr[i][j] != 0)
				k++;
		}
		if (k == n) {
			count++;
		}
		k = 0;
	}
	cout << count << " столбцов не содержат нули";
	delete[] arr;
}