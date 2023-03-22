#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    const int count = 99;
    long A[count];
    int sz, rmx = 99, col = 0;


    cout << "Введите размер массива:";
    cin >> sz;
    srand((unsigned)time(NULL));

    for (int i = 0; i < sz; i++) {
        A[i] = rand() % rmx;
        cout << A[i] << "\t";
    }

    for (int n = 1; n <= sz; n++) {
        if (A[n] == A[n - 1]) {
            col += 1;
        }
    }

    cout << "Количество пар соседних элементов массива с одинаковыми значениями = " << col ;
}