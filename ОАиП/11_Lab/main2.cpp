#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Rus");
    int i, j, n, count, unic = 0;

    puts("������� ���-�� ��������� �������: ");
    cin >> n;
    int* Z = new int[n];
    puts("������� n ��������� ������� Z: ");
    for (int i = 0; i < n; i++) {
        cin >> *(Z + i);
  	}
    for (i = 0; i < n; i++)
    {
        for (count = j = 0; j <= i; j++)
            if (*(Z+i) == *(Z +j)) 
                count++;
        if (count == 1)
        {
            unic++;
            cout << *(Z + i) << " ";
        }
    }

    cout << endl << unic << " ���������� �����";
    return 0;
}