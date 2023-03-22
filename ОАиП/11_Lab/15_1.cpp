#include <windows.h>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Rus");
    const int count = 100;
    int A[count], sum = 0, znach = 0, srznach = 0, sz;


    cout << "¬ведите размер массива:";
    cin >> sz;
    cout << "¬ведите элементы массива:";

    for (int i = 0; i < sz; i++) {
        cin >> *(A + i);
    }

    for (int n = 0; n < sz; n++)
    {
        if (*(A + n) > 0)
            cout << *(A + n) << "\t";
    }

    printf("|\t");

    for (int n = 0; n < sz; n++)
    {
        if (*(A + n) < 0)
            cout << *(A + n) << "\t";
    }
}