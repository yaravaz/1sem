#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>

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
	string str, ws, strMax, strMin;
	int max = 0, min = 10, k = 0, indexMax = 0, indexMin = 0, i = 0;
	cin >> ws;
	getline(cin, str);
	str.insert(0, ws);
	for (int i = 0; i < size(str); i++) {
		if (str[i] != ' ') {
			k++;
		}
		else {
			if (k > max) {
				max = k;
				indexMax = i;
			}
			if (k < min) {
				min = k;
				indexMin = i;
			}	
			k = 0;
		}
	}
	if (indexMax > indexMin) {
		i = indexMin - min;
	}
	else 
		i = indexMax - max;
	for (i; i < size(str); i++) {
		if (i >= (indexMax - max) && i <= indexMax ) {
			strMax.push_back(str[i]);
		}
		if (i >= (indexMin - min) && i <= indexMin) {
			strMin.push_back(str[i]);
		}
	}
	cout << "\nсамое длинное слово: " << strMax << endl;
	cout << "самое короткое слово: " << strMin;
}

void massive() {
	int n, max = 0, count = 0;
	cout << "n = ";
	cin >> n;
	srand((unsigned)time(NULL));
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 20;
		cout << arr[i] << "\t";
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == max)
			count++;
	}
	cout << "\nКоличество " << count << endl;
}