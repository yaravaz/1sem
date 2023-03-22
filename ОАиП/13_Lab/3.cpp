#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "n: ";
    cin >> n;
    float** arr = new float* [n];
    float max;
    int i_max, j_max, count;
    for (i = 0; i < n; ++i)
    {
        arr[i] = new float[n];
        for (j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
            if (((!i) && (!j)) || (arr[i][j] > max))
            {
                max = arr[i][j];
                i_max = i;
                j_max = j;
            }
        }
    }
    arr[i_max][j_max] = arr[0][0];
    arr[0][0] = max;
    for (count = 1; count < n; ++count)
    {
        max = arr[0][1];
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                if (((i != j) || ((i >= count) && (j >= count))) && (arr[i][j] > max))
                {
                    max = arr[i][j];
                    i_max = i;
                    j_max = j;
                }
        arr[i_max][j_max] = arr[count][count];
        arr[count][count] = max;
    }
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
    return 0;
}