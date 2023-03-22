#include <iostream>
#include <Windows.h>
#include <ctime>
#include <iomanip>

using namespace std;

int to4_1(int*);
void to4_2(int**, int&, int&);

long long int to7_1(int*);
void to7_2(int**, int&, int&);

void to10_1(int*, int&);
void to10_2(int**, int&, int&);

void to15_1(int*, int&);
void to15_2(int**, int&, int&);

int main()
{
    srand(time(0));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m,  cycle = 1;
    int** matrix;
    int* arr;
    while (cycle == 1) {
        puts("Введите номер варианта(4, 7, 10, 15)   0 - выход");
        cin >> n;
        switch (n) {
        case(4):
            cout << "Введите задание" << endl;
            cin >> n;
            switch (n)
            {
            case 1:
                arr = new int[15];
                for (int i = 0; i < 15; i++)
                {
                    arr[i] = 1 + rand() % 200;
                    cout << arr[i] << " ";
                }

                cout << endl << "Сумма нечётных элементов = " << to4_1(arr) << endl;
                delete[] arr;
                break;

            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];

                for (int i = 0; i < n; i++) {
                    matrix[i] = new int[m];
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                }

                to4_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;
        case(7):
            cout << "Введите задание" << endl;
            cin >> n;
            switch (n) {
            case(1):
                arr = new int[15];
                for (int i = 0; i < 15; i++) {
                    arr[i] = 1 + rand() % 200;
                    cout << arr[i] << " ";
                }
                cout << endl << "Произведение= " << to7_1(arr) << endl;
                delete[] arr;
                break;
            case(2):
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];

                for (int i = 0; i < n; i++) {
                    matrix[i] = new int[m];
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                }
                to7_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;
                break;
            }
            break;
        case(10):
            cout << "Введите задание" << endl;
            cin >> n;
            switch (n) {
            case 1:
                cout << "n = ";
                cin >> n;
                arr = new int[n];
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                to10_1(arr, n);
                delete[] arr;

                break;
            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                    
                for (int i = 0; i < n; i++) {
                    matrix[i] = new int[m];
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                }
                    
                to10_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;
        case(15):
            cout << "Введите задание" << endl;
            cin >> n;
            switch (n) {
            case 1:
                cout << "n = ";
                cin >> n;
                arr = new int[n];
                for (int i = 0; i < n; i++)
                {
                    cin >> arr[i];
                }

                to15_1(arr, n);
                delete[] arr;

                break;
            case 2:
                cout << "n = ";
                cin >> n;
                cout << "m = ";
                cin >> m;
                matrix = new int* [n];
                    
                for (int i = 0; i < n; i++) {
                    matrix[i] = new int[m];
                    for (int j = 0; j < m; j++)
                        cin >> matrix[i][j];
                }
                to15_2(matrix, n, m);
                for (int k = 0; k < n; k++)
                    delete[] matrix[k];
                delete[] matrix;

                break;
            }
            break;
        case(0):
            cycle = 0;
            break;
        }
    }
}

int to4_1(int* m)
{
    int sum = 0;
    for (int i = 0; i < 15; i++)
        if (*(m + i) % 2 != 0)
            sum += *(m + i);
    return sum;
}

void to4_2(int** matrix, int& n, int& m)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > 0 && count == 0) {
                count++;
                cout << "Номер строки " << i + 1 << endl;
                if (i == 0) {
                    for (int k = 0; k < m; k++)
                        matrix[n - 1][k] *= (-1);
                }
                else {
                    for (int k = 0; k < m; k++)
                        matrix[i-1][k] *= -1;
                }

            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
}

long long int to7_1(int* m)
{
    long long int pr = 1;
    for (int i = 2; i <= 7; i++)
        pr *= m[i];
    return pr;
}

void to7_2(int** matrix, int& n, int& m)
{
    int sum = 0;
    cout << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] > 0)
            {
                sum = 0;
                break;
            }
            else
                sum += matrix[i][j];
        }
        if (sum != 0)
            break;
    }
    sum /= n;
    cout << sum << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {
            matrix[i][j] -= sum;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void to10_1(int* m, int& n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 2)
        if (*(m + i) % 2 == 0)
            cout << "arr[" << i << "] = " << *(m + i) <<"; ";
    cout << endl;
}

void to10_2(int** matrix, int& n, int& m)
{
    int count = 0, max = matrix[0][0];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max == matrix[i][j])
                count++;
        }
    }
    if (count != 0)
    {
        cout << "Встретилось " << count << " раз" << endl;
        if (count > 1) {
            cout << "Максимальное значение = " << max << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (max == matrix[i][j])
                        cout << "i = " << i << "  j = " << j << endl;
                }
            }
        }
    }
}

void to15_1(int* m, int& n)
{
    int index = 0, min = *m, count = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(m + i) <= min)
        {
            min = *(m + i);
            index = i+1;
        }
    }
    for (int i = index; i < n; i++)
    {
        if (*(m + i) < 0)
            count++;
    }
    cout << "количество = " << count << endl;
}

void to15_2(int** matrix, int& n, int& m)
{
    int count = 0, k = 0, h = 0;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > 0) {
                count++;
            }
        }
        if (count > 0) {
            k++;
        }
        if (count == 0 && h == 0){
            for (int i = 0; i < n; i++)
                matrix[i][j] = abs(matrix[i][j]);
            h++;
            
        } 
        count = 0;
    }
    if (k == n)
        puts("Все столбцы удовлетворяют условию");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}