#include <windows.h> //4вариант
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    const int count = 100, rmx = 100;
    int A[count], sz, max = 0, min = 0, maxnum = 0, minnum = 0;

    printf("¬ведите размер массива:");
    cin >> sz;
    srand(time(NULL));
    for (int i = 0; i < sz; i++)
    {
        A[i] = rand() % 100;
        cout << A[i] << '\t';
    }

    cout << endl;
    cout << endl;

    max = A[0];
    min = A[0];

    for (int i = 1; i < sz; i++)
    {
        if (max < A[i]) {
            max = A[i];
            maxnum = i;
        }
        else if (min > A[i]) {
            min = A[i];
            minnum = i;
        }

    }

    for (int i = 0; i < sz; i++) {
        if (i == maxnum) {
            cout << A[minnum] << "\t";
        }
        else if (i == minnum)
            cout << A[maxnum] << "\t";
        else
            cout << A[i] << "\t";
    }

}