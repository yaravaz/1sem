#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int n = 0, m = 0, max = 0; bool bol = false;
	puts("������� ������ ������� �������: ");
	cin >> n;
	int* F = new int[n];
	puts("������� �������� ������� F: ");
	for (int i = 0; i < n; i++) {
		cin >> *(F + i);
		if (max < *(F + i)) {
			max = *(F + i);
		}
	}
	puts("������� ������ ������� �������: ");
	cin >> m;
	int* D = new int[m];
	puts("������� �������� ������� D: ");
	for (int i = 0; i < m; i++) {
		cin >> *(D + i);
		if (max == *(D + i)) {
			bol = true;
		}
	}
	if (bol == true)
		puts("���������� ������� ������� F ���� � ������� D");
	else
		puts("����������� �������� ������� F ��� � ������� D");
}