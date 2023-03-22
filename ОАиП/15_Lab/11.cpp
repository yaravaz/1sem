#include <iostream>
#include <string>

using namespace std;

void strings();
void massive();

int main() {
	setlocale(LC_CTYPE, "Rus");
	puts("Введите задание ");
	int n;
	cin >> n;
	switch (n) {
	case(1):
		massive();
		break;
	case(2):
		strings();
		break;
	default:
		cout << "Проверьте введённые данные";
		break;
	}
}
void strings() {
	string str;
	cin >> ws;
	getline(cin, str);
	for (int i = 0; i < size(str); i++) {
		if (str[i] == 'c') {
			str.insert(i+1,"*");
		}
	}
	cout << str;
}

void massive() {
	int n, m, max = 0, sum = 0;
	cout << "n = ";
	cin >> n;
	cout << "\nm = ";
	cin >> m;
	srand((unsigned)time(NULL));
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
		for (int j = 0; j < m; j++) {
			arr[i][j] = -10 + rand() % 20;
			cout << arr[i][j] << "\t";
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
			
		}
		cout << endl;
	}
	cout << max << " - максимальный элемент" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == max) {
				cout << "i = " << i << "\t";
				cout << "j = " << j << endl;
			}
			if (i > j)
				sum += arr[i][j];
		}
	}
	cout << "Сумма= " << sum << endl;
}