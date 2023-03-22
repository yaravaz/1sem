#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Rus");
	char simb = 'b', str[80]; int n = 0, count = 0, counter = 0;

	puts("¬ведите строку: ");

	gets_s(str);
	n = strlen(str);
	for (int i = 0; i < n; i++) {
		if (str[i] == simb) {
			for (int j = i; j < n; j++) {
				str[j] = str[j + 1];
			}
			count++;
			i--;
		}
	}
	for (int i = 0; i < n - count; i++)
		cout << str[i];
}
