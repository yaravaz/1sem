#include <windows.h> //6�������
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    const int count = 100, rmx = 99;
    int A[count], element = 0, m = 0, sz;

    cout << "������� ������ �������:";
    cin >> sz;

    srand((unsigned)time(NULL));

    for (int i = 0; i < sz; i++) {
        A[i] = rand() % rmx;
        cout << A[i] << "\t";
    }

    cout << endl;
    cout << endl;

    cout << "������� �������, ������� �� ������ ��������� �� �������: ";
    cin >> element;

    
    

    for (int n = 0; n < sz; n++)
    {
        if (A[n] != element)
            cout << A[n] << "\t";
        else
            m++;
    }

    cout << "������� ��������� ���� �������: " << m;

    cout << endl;
    cout << endl;

    for (int m = 0; m < sz; m++) {
        if (A[m] % 2 == 0) {
            cout << "1" << "\t";
            cout << A[m] << "\t";
        }
        else
            cout << A[m] << "\t";
    }

}