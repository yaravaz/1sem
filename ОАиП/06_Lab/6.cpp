#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_CTYPE, "Rus");
    int n, k = 2;
    printf("¬ведите число n = ");
    scanf_s("%d", &n);
    printf("%d", n);
    printf(" = 1");
    while (n > 1)
    {
        while (n % k == 0)
        {
            cout << " * " << k;
            n = n / k;
        }
        if (k == 2)
            k++;
        else
            k += 2;
    }
}