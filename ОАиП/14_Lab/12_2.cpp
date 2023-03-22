#include <iostream>
using namespace std;

void main() {
	setlocale(LC_CTYPE, "Rus");

	const int rmx = 35;
	int n, m, index = 0; bool bol = false;

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
			arr[i][j] = -30 + rand() % rmx;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				index = i + 1;
				bol = true;
				break;
			}
		}
		if (bol == true)
			break;
	}
	
	if (index == 0) {
		puts("Такой строки нет");
	}
	else
		cout << index << " - искомая строка" << endl;

	for (int j = 0; j < m; j++) {
		if (index - 1 == 0) {
			arr[n-1][j] *= -1;
		}
		else
			arr[index - 2][j] *= -1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	delete[] arr;
}