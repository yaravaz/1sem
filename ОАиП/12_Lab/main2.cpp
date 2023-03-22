#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	int n = 10, count = 0, arr[10], buf;

	puts("¬ведите строку: ");

	char* str = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	for (int i = 0; i < n; i++) {
		*(arr + i) = (int)*(str + i) - '0';
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (*(arr + i) > *(arr + j)) {
				buf = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = buf;
			}
		}
		cout << *(arr + i) << " ";
	}
	
	delete[] str;
}
