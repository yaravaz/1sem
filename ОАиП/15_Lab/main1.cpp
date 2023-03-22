#include <iostream>
#include <string>
using namespace std;

void massive();
void strings();

int main() {
	setlocale(LC_CTYPE, "Rus");
	int a;
	puts("Введите 1 для работы с массивом");
	puts("Введите 2 для работы со строкой");
	cin >> a;
	switch (a) {
	case(1): {
		massive();
		break;
	}
	case(2): {
		strings();
		break;
	}
	default: {
		puts("Проверьте введённые данные");
		break;
	}
	}
}

void massive() {
	int n;

	puts("Введите размер массива: ");
	cin >> n;

	int** arr = new int* [n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				cout << arr[i][j] - arr[n - 1][j] << "\t";
			}
			else
				cout << arr[i][j] - arr[i - 1][j] << "\t";
		}
		cout << endl;
	}
}

void strings() {
	int sum = 0, count = 0; bool bol = false;
	puts("Введите строку: ");
	string str, str1;
	cin >> ws;
	getline(cin, str);
	for (int i = 0; i < size(str); i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			int k = i;
			while (str[k] >= '0' && str[k] <= '9') {
				str1.push_back(str[k]);
				k++;
			}
		}
		for (int j = 0; j < size(str1); j++) {
			if (j == size(str1) - 1)
				sum += str1[j] - '0';
			else
				sum += (str1[j] - '0') * pow(10, (size(str1) - 1 - j));
			count++;
			bol = true;
		}
		if (bol == true) {
			str1 = "";
			i += count - 1;
			count = 0;
		}
		bol = false;
	}
	cout << "Сумма = " << sum;
}