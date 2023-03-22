#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    const int count = 100, rmx = 100;
    int A[count], sum = 0, znach = 0, srznach = 0, sz;


    cout << "¬ведите размер массива:";
    cin >> sz;
    srand((unsigned)time(NULL));

    for (int i = 0; i < sz; i++) {
        A[i] = rand() % rmx;
        cout << A[i] << "\t";
        znach = A[i];
        sum += znach;
    }

    srznach = sum / sz;
    cout << "\n\n—реднее арифметическое всех значений массива: " << srznach << endl<< endl;

    for (int n = 0; n < sz; n++)
    {
        if (A[n] >= srznach)
            cout << A[n] << "\t";
    }

    printf("|\t");

    for (int n = 0; n < sz; n++)
    {
        if (A[n] < srznach)
            cout << A[n] << "\t";
    }
}