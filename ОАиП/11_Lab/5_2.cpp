#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Rus");
    const int rmx = 10;
    int i, j, n, m, count = 0;

    puts("¬ведите кол-во элементов массива A: ");
    cin >> n;
    srand((unsigned)time(NULL));
    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        *(A + i) = rand() % rmx;
        cout << *(A + i) << " ";
    }

    cout << endl;

    puts("¬ведите кол-во элементов массива B: ");
    cin >> m;
    int* B = new int[m];
    for (int i = 0; i < m; i++) {
        *(B + i) = rand() % rmx;
        cout << *(B + i) << " ";
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++) {
            if (*(A + i) == *(B + j)) {
                count++;
            }
        }
    }

    cout << endl << count << " подход€щих пар";
    return 0;
}