#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	int const n = 4, m = 4; int A[n][m], sum = 0, count = 0, result = 0;
	puts("������� �������� �������(������ ������� 4�4):");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> *(*(A + i) + j);
			sum += *(*(A + i) + j);
			count++;
		}
	}
	cout << "\n" << sum/count << " - ������� �������������� ��������� �������" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(*(A + i) + j) > (sum / count)) {
				result++;
				cout << "A["<< i << "][" << j << "]= " << *(*(A + i) + j) << "\t";
			}
		}
	}
	cout << "\n" << result << " ��������� ������ �������� ��������������� ��������";
}