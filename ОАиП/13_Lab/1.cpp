#include <iostream> 
#include <ctime>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "rus");
	int n, m, buf;

	cout << "n: ";
	cin >> n;
	m = n * 2;

	int** arr = new int* [m];
	srand((unsigned)time(NULL));

	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = -10 + rand() % 20;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Новая матрица: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i < n && j < n) {
				buf = arr[i][j];
				arr[i][j] = arr[i + n][j + n];
				arr[i + n][j + n] = buf;
				cout << arr[i][j] << "\t";
			}
			else if (i < n && j >= n && j < m) {
				buf = arr[i][j];
				arr[i][j] = arr[i + n][j - n];
				arr[i + n][j - n] = buf;
				cout << arr[i][j] << "\t";
			}
			else
				cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}