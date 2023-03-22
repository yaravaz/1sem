#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Rus");
    const int rmx = 100;
    int i, j, n1, n2, sum = 0, f, k = 0, m = 0;

    puts("¬ведите кол-во элементов массива S: ");
    cin >> n1;
    srand((unsigned)time(NULL));
    int* S = new int[n1];
    for (int i = 0; i < n1; i++) {
        *(S + i) = rand() % rmx;
        cout << *(S + i) << " ";
    }
    cout << endl;
    puts("¬ведите кол-во элементов массива D: ");
    cin >> n2;
    int* D = new int[n2];
    for (int i = 0; i < n2; i++) {
        *(D + i) = rand() % rmx;
        cout << *(D + i) << " ";
    }
    cout << endl;
    puts("¬ведите число f: ");
    cin >> f;
    int min = S[0] + D[0];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++) {
            if (abs(*(S + i) + *(D + j) - f) < min) {
                min = abs(*(S + i) + *(D + j) - f);
                sum = *(S + i) + *(D + j);
                k = i;
                m = j;
            }
        }
    }

    cout << endl << sum << " - подходит сумма элементов S[" << k << "] + D[" << m << "]";
    return 0;
}