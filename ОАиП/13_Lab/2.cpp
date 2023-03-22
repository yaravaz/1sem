#include <iostream> 
#include <ctime>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "rus");
	int n, m = 0;

	cout << "n: ";
	cin >> n;

	int** arr = new int* [n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j + m < n) {
				arr[i][j + m] = j + 1;
			}
			else
				arr[i][j + m - n] = j + 1;
		}
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << "\t";
		m++;
		cout << endl;
	}
}