#include <iostream>
#include <string>

using namespace std;

int strings();
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
		cout << strings() + 1 << " слов";
		break;
	default:
		cout << "Проверьте введённые данные";
		break;
	}
}
int strings() {
	string str;
	int count = 0;
	cin >> ws;
	getline(cin, str);
	for (int i = 0; i < size(str); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	return count;
}

void massive() {
	int n, m, otr = 0, pol = 0, nul = 0;
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
			if (arr[i][j] > 0) {
				pol++;
			}
			else if (arr[i][j] == 0)
				nul++;
			else
				otr++;
		}
		cout << endl;
	}
	cout << "\nПоложительных= " << pol << endl;
	cout << "Нулевых= " << nul << endl;
	cout << "Отрицательных= " << otr << endl;
}