#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, m, max = 0; bool bol = false;
	puts("������� ���-�� ��������� ������� �������: ");
	cin >> n;
	int* A = new int[n];
	puts("������� n ��������� ������� �: ");
	for (int i = 0; i < n; i++) {
		cin >> *(A + i);
		if (max < *(A + i)) {
			max = *(A + i);
		}
	}
	puts("������� ���-�� ��������� �������  �������: ");
	cin >> m;
	int* B = new int[m];
	puts("������� m ��������� ������� B: ");
	for (int i = 0; i < m; i++) {
		cin >> *(B + i);
		if (*(B + i) == max) {
			bol = true;
		}
	}
	if (bol == true) {
		puts("���������� ������� ������� � ���� � ������� �");
	}
	else {
		puts("����������� �������� ������� � ��� � ������� �");
	}
}
