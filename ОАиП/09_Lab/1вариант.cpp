#include <iostream>;
#include <windows.h>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "Russian");

    const int maxned = 50;
    int sum[maxned], a[maxned], ned, maxn = 0, maxo = 0;

    cout << "������� ���������� ������: ";
    cin >> ned;
    sum[0] = 0;
    for (int k = 1; k <= ned; k++) {
        cout << "������� ���������� ������� �� " << k << " ������: ";

        sum[k] = 0;
        for (int i = 1; i <= 7; i++) {
            cin >> a[i];
            sum[k] = sum[k] + a[i];
        }
        if (sum[k] > maxo) { 
            maxn = k;
            maxo = sum[k];
        }
        cout << endl;
    }
    cout << "������������ ������ �� " << maxn << " ������ � ���������� " << maxo << endl;
}