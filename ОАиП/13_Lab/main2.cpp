#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	int const n = 3, m = 6; int A[n][m], count = 0;
	puts("¬ведите элементы массива(размер массива 3х6):");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> *(*(A + i) + j);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j != 0 && j != m - 1) {
				if (*(*(A + i) + j) > *(*(A + i) + j - 1) && *(*(A + i) + j) < *(*(A + i) + j + 1)) {
					cout << "A[" << i << "][" << j << "]= " << *(*(A + i) + j) << "\t";
					count++;
				}
			}
		}
	}
	cout << "\n" << count << " подход€щих условию элементов";
}